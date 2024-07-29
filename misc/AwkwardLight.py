#import sys; sys.stdin = open('awkwardlight_data/sample.in', 'r')


def search_rows(y, x, matrix) -> bool:
    if matrix[y][x]:
        return True
    for i in range(y + 1, msize):
        if matrix[i][x] > 0:
            row = matrix[i]
            matrix[i] = matrix[y]
            matrix[y] = row
            return True
    return False


def sweep(y, x, matrix):
    for i in range(y + 1, msize):
        if matrix[i][x] > 0:
            for j in range(x, msize+1):
                matrix[i][j] = (matrix[i][j] + matrix[y][j]) & 0x1


def gauss_elm(matrix) -> int:
    y = 0
    for x in range(msize):
        suc = search_rows(y, x, matrix)
        if not suc:
            continue
        sweep(y, x, matrix)
        y += 1

    for i in range(y, msize):
        if matrix[i][msize]:
            return 0
    return 1


def solve():
    matrix = []
    for ly in range(n):
        for lx in range(m):
            row = []
            for sy in range(n):
                for sx in range(m):
                    diff = abs(lx - sx) + abs(ly - sy)
                    v = 1 if diff == 0 or diff == d else 0
                    row.append(v)
            row.append(board[ly][lx])
            matrix.append(row)
    print(gauss_elm(matrix))


while True:
    m, n, d = list(map(int, input().split()))
    msize = m * n
    if m == n == d == 0:
        break
    board = [list(map(int, input().split())) for _ in range(n)]
    solve()
