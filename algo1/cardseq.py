# 標準入力の代わりにファイル（今回は `scope_test_input.txt`）からデータを
# 読み込みたい場合は、直後の行を有効化してください。完成時は、コメントに戻すのを忘れずに！
#import sys; sys.stdin = open('cardseq_input.txt', 'r')


import itertools

N = int(input())
K = int(input())
cards = [ int(input()) for _ in range(N) ]

def calc(lst):
    result = 0
    for k in lst:
        if k > 9:
            result = result * 100 + k
        else:
            result = result * 10 + k
    return result

done = {}
for seq in itertools.permutations(cards, K):
    num = calc(seq)
    done[num] = 1

print(len(done))




