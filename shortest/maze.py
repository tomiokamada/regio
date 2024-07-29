from collections import deque
#ファイルから読み込みたい場合は、直後の行を有効化してください。完成時は、コメントに戻すのを忘れずに！
#import sys; sys.stdin =  open('mazeData/B1.in', 'r')
directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]


def setup():
    i = 0
    while True:
        wall = input().split()
        for j, d in enumerate(wall):
            if d == "0":
                canGoX[1 + i][1 + j] = True
        if i + 1 == h:
            break
        wall = input().split()
        for j, d in enumerate(wall):
            if d == "0":
                canGoY[1 + i][1 + j] = True
        i += 1


def can_go(x, y, dx, dy) -> bool:
    if dy == 0:
        if dx > 0:
            return canGoX[1 + y][1 + x]
        else:
            return canGoX[1 + y][1 + x - 1]
    else:
        if dy > 0:
            return canGoY[1 + y][1 + x]
        else:
            return canGoY[1 + y - 1][1 + x]


def solve() -> int:
    goal = [w - 1, h - 1]
    q = deque([[0, 0]])
    steps = [[0 for _ in range(w)] for _ in range(h)]
    steps[0][0] = 1

    while q:
        x, y = q.popleft()
        current_step = steps[y][x]
        for dx, dy in directions:
            if can_go(x, y, dx, dy):
                nx, ny = [x + dx, y + dy]
                if steps[ny][nx] > 0:
                    continue
                if [nx, ny] == goal:
                    return current_step + 1
                steps[ny][nx] = current_step + 1
                q.append([nx, ny])
    return 0


while True:
    w, h = map(int, input().split())
    if w == h == 0:
        exit(0)
    canGoX = [[False for _ in range(w + 2)] for _ in range(h + 2)]
    canGoY = [[False for _ in range(w + 2)] for _ in range(h + 2)]
    setup()
    result = solve()
    print(result)
