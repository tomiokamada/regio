import sys
input = sys.stdin.readline
## debugの時はファイルから読み込む方が楽
#input = open('maxRange/input/input1.txt', 'r').readline


def main():
    n = int(input())
    list = [int(input()) for i in range(n)]
    maxS = 0
    Si = 0
    for li in list:
        prevSi = Si
        s = prevSi + li
        Si = s if s>0 else 0
        maxS = max(maxS, Si)
    print(maxS)

main()
