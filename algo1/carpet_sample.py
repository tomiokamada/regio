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
    while q:
        x, y = q.popleft()
        step = steps[y][x]
        for dx, dy in directions:
            nx, ny = x+dx, y+dy
            if nx < 0 or ny < 0 or nx >= W or ny >= H:
                continue
            if steps[ny][nx] >= 0:
                continue
            if S[y][x] == S[ny][nx]:
                continue
            if nx==W-1 and ny == H-1:
                return step+1
            steps[ny][nx] = step+1
            q.append((nx, ny))
    return -1

print(solve())

