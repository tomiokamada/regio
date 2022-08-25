from collections import deque

# input = open('mazeData/B1.in', 'r').readline
directions = [[1, 0], [-1, 0], [0, 1], [0, -1]]


class Solver:
    def __init__(self) -> None:
        self.w = w
        self.h = h
        self.canGoX = [[False for _ in range(w + 2)] for _ in range(h + 2)]
        self.canGoY = [[False for _ in range(w + 2)] for _ in range(h + 2)]
        self.steps = [[0 for _ in range(w)] for _ in range(h)]
        i = 0
        while True:
            wall = input().split()
            for j, d in enumerate(wall):
                if d == "0":
                    self.canGoX[1 + i][1 + j] = True
            if i + 1 == h:
                break
            wall = input().split()
            for j, d in enumerate(wall):
                if d == "0":
                    self.canGoY[1 + i][1 + j] = True
            i += 1

    def can_go(self, x, y, dx, dy) -> bool:
        if dy == 0:
            if dx > 0:
                return self.canGoX[1 + y][1 + x]
            else:
                return self.canGoX[1 + y][1 + x - 1]
        else:
            if dy > 0:
                return self.canGoY[1 + y][1 + x]
            else:
                return self.canGoY[1 + y - 1][1 + x]

    def solve(self) -> int:
        goal = [w - 1, h - 1]
        q = deque([[0, 0]])
        self.steps[0][0] = 1

        while q:
            x, y = q.popleft()
            current_step = self.steps[y][x]
            for dx, dy in directions:
                if self.can_go(x, y, dx, dy):
                    nx, ny = [x + dx, y + dy]
                    if self.steps[ny][nx] > 0:
                        continue
                    if [nx, ny] == goal:
                        return current_step + 1
                    self.steps[ny][nx] = current_step + 1
                    q.append([nx, ny])
        return 0


while True:
    w, h = map(int, input().split())
    if w == h == 0:
        exit(0)
    result = Solver().solve()
    print(result)
