import math
from heapq import heappush, heappop
#ファイルから読み込みたい場合は、直後の行を有効化してください。完成時は、コメントに戻すのを忘れずに！
#import sys; sys.stdin =  open('cliffData/D1.in', 'r', )

one_hop = [
    [[1, 2], [1, 1], [1, 0], [1, -1], [1, -2], [2, 1], [2, 0], [2, -1], [3, 0]],
    [[-1, 2], [-1, 1], [-1, 0], [-1, -1], [-1, -2], [-2, 1], [-2, 0], [-2, -1], [-3, 0]]]


def solve() -> int:
    q = []  # priority queue of [time, left/right, pos]
    board = [input().split() for _ in range(h)]
    cost = [[[math.inf, math.inf] for _ in range(w)] for _ in range(h)]
    for i, row in enumerate(board):
        for j, c in enumerate(row):
            if c == 'S':
                heappush(q, [0, 0, [j, i]])  # time:0, left/right, pos
                heappush(q, [0, 1, [j, i]])
                cost[i][j][0] = cost[i][j][1] = 0

    while q:
        t, lr, [x, y] = heappop(q)
        if cost[y][x][lr] < t:
            continue
        nlr = 1 - lr
        for dx, dy in one_hop[lr]:
            nx, ny = [x + dx, y + dy]
            if ny < 0 or ny >= h or nx < 0 or nx >= w:
                continue
            nc = board[ny][nx]
            if nc == 'T':
                return t
            elif nc == 'X' or nc == 'S':
                continue
            nt = t + int(nc)
            if cost[ny][nx][nlr] < nt:
                continue
            cost[ny][nx][nlr] = nt
            heappush(q, [nt, nlr, [nx, ny]])
    return -1


while True:
    w, h = map(int, input().split())
    if w == h == 0:
        exit(0)
    result = solve()
    print(result)
