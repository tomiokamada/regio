# debugの時はファイルから読み込む方が楽
# 環境によっては、 `maxRange/input/input1.txt` などに変更しましょう
# input = open('input/input1.txt', 'r').readline


def main():
    n = int(input())
    numbers = [int(input()) for _ in range(n)]
    result = 0
    for i in range(n):
        for j in range(i + 1, n + 1):
            # s = 0
            # for k in range(i, j):
            #    s += numbers[k]
            s = sum(numbers[i:j])
            result = max(result, s)
    print(result)


main()
