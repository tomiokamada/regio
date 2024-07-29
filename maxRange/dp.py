# debugの時はファイルから読み込む方が楽
# 環境によっては、 `maxRange/input/input1.txt` などに変更しましょう
#import sys; sys.stdin = open('input/input1.txt', 'r')


def main():
    n = int(input())
    numbers = [int(input()) for _ in range(n)]
    max_s = 0
    si = 0
    for li in numbers:
        prev_si = si
        s = prev_si + li
        si = s if s > 0 else 0
        max_s = max(max_s, si)
    print(max_s)


main()
