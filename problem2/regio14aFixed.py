# デバッガ利用時など標準入力を使いたい場合は、変更を。
# ファイル名は環境によっては 'problem2/sample1.txt' などに変更を。
# input = open('sample1.txt', 'r').readline

def nth(skip, i):
    if i < skip:
        return i
    else:
        return i + 1


def check(skip, n, vec):
    d = vec[nth(skip, 1)] - vec[nth(skip, 0)]
    for i in range(2, n):
        di = vec[nth(skip, i)] - vec[nth(skip, i - 1)]
        if di != d:
            return False
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
