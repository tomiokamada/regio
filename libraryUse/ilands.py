from collections import deque

# debugの時はファイルから読み込む方が楽
# 環境によっては、 `maxRange/input/input1.txt` などに変更しましょう
# input = open('data4ilands/sample.in', 'r').readline

directions = [[1, 0], [-1, 0], [0, 1], [0, -1],
              [1, 1], [-1, -1], [-1, 1], [1, -1]]


class Solver:
    def __init__(self, w0: int, h0: int) -> None:
        self.w = w0
        self.h = h0
        self.c = [list(map(int, input().split())) for _ in range(h)]
        self.num_lands = sum([sum(row) for row in self.c])
        return

    def search_one(self) -> list:
        for i, row in enumerate(self.c):
            for j, cell in enumerate(row):
                if cell > 0:
                    return [j, i]
        raise Exception("should not occur!")

    def range_check(self, x: int, y: int) -> bool:
        return x < 0 or x >= self.w or y < 0 or y >= self.h

    def del_land(self, x: int, y: int):
        self.c[y][x] = 0
        self.num_lands -= 1

    def solve(self) -> int:
        num_ilands = 0
        while self.num_lands > 0:
            num_ilands += 1
            one = self.search_one()
            self.del_land(one[0], one[1])
            searching = deque([one])
            while searching:
                x, y = searching.pop()
                for direct1 in directions:
                    dx, dy = direct1
                    nx, ny = [x + dx, y + dy]
                    if self.range_check(nx, ny):
                        continue
                    if self.c[ny][nx] > 0:
                        self.del_land(nx, ny)
                        searching.append([nx, ny])
        return num_ilands


while True:
    w, h = map(int, input().split())
    if w == h == 0:
        exit(0)
    result = Solver(w, h).solve()
    print(result)
