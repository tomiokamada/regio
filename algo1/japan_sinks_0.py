# 標準入力の代わりにファイル（今回は `scope_test_input.txt`）からデータを
# 読み込みたい場合は、直後の行を有効化してください。完成時は、コメントに戻すのを忘れずに！
#import sys; sys.stdin = open('japan_sinks_input.txt', 'r')


N = int(input())
As = list(map(int, input().split()))

# As = [0 1 2 1 3 2]
# に対し　A_pairs =    [(0, 0), (1, 1), (2, 2), (3, 1), (4, 3), (5, 2)]
A_pairs = [  (index, As[index]) for index in range(N) ]
# A_pair = list(enumerate(As)) # でも同じこと

def my_order(pair):
    index, val = pair
    return -val  # val の大きい順に sort したいので、+/- 逆に
#def my_order(pair): # こちらでも同じこと
#   val = pair[1]
#   return -val

A_pairs.sort(key=my_order)
# key でソートの基準値を与えることで、
# ソート後は　A_pairs = [(4, 3), (2, 2), (5, 2), (1, 1), (3, 1), (0, 0)]　
# (val の大きい順) のようになる
# A_pairs.sort(key=lambda pair: -pair[1]) #でも同じこと
print(A_pairs)


