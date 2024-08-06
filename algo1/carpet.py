# 標準入力の代わりにファイル（今回は `scope_test_input.txt`）からデータを
# 読み込みたい場合は、直後の行を有効化してください。完成時は、コメントに戻すのを忘れずに！
#import sys; sys.stdin = open('carpet_input.txt', 'r')

from collections import deque

H, W = map(int, input().split())
S = [ input() for _ in range(H) ]
directions = [(-1, 0), (1, 0), (0, 1), (0, -1)]

def solve():
    steps = [[-1 for _ in range(W) ] for _ in range(H)]
    q = deque()
    q.append((0, 0))
    steps[0][0] = 0
    # ここから完成させてみましょう


