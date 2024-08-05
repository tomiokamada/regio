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


