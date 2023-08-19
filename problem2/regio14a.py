# デバッガ利用時など標準入力を使いたい場合は、変更を。
# ファイル名は環境によっては 'problem2/sample1.txt' などに変更を。
# input = open('sample1.txt', 'r').readline


def check(skip, n, vec):
    return True


def main():
    n = int(input())
    line = input()
    vec = list(map(int, line.split()))
    for skip in range(n + 1):
        if check(skip, n, vec):
            print(vec[skip])
            return


main()
