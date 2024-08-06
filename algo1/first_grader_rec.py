# 標準入力の代わりにファイル（今回は `scope_test_input.txt`）からデータを
# 読み込みたい場合は、直後の行を有効化してください。完成時は、コメントに戻すのを忘れずに！
#import sys; sys.stdin = open('first_grader_input.txt', 'r')

N = int(input())
nums = list(map(int, input().split()))
first = nums.pop(0)
last = nums.pop(-1)

def solve(i, current):  # i 番目以降の +/- をチェックして、組み合わせ数を求める。 current はここまでの結果
    if current < 0 or current > 20:
        return 0
    if i == len(nums):
        if current == last:
            return 1
        else:
            return 0
    num = nums[i]
    result0 = solve(i+1, current+num)
    result1 = solve(i+1, current-num)
    return result0 + result1

print(solve(0, first))


