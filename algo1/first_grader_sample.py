# 標準入力の代わりにファイル（今回は `scope_test_input.txt`）からデータを
# 読み込みたい場合は、直後の行を有効化してください。完成時は、コメントに戻すのを忘れずに！
#import sys; sys.stdin = open('first_grader_input.txt', 'r')

N = int(input())
nums = list(map(int, input().split()))
first = nums.pop(0)
last = nums.pop(-1)

dp = [0]*21
dp[first] = 1

for num in nums:
    ndp = [0] * 21
    for i in range(21):
        if i + num <= 20:
            ndp[i + num] += dp[i]
        if i - num >= 0:
            ndp[i - num] += dp[i]
    dp = ndp

print(dp[last])


