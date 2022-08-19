# debugの時はファイルから読み込む方が楽
# 環境によっては、 `maxRange/input/input1.txt` などに変更しましょう
# input = open('input/input1.txt', 'r').readline


def main():
    n = 5
    numbers = [int(input()) for _ in range(n)]
    numbers.sort()
    print(numbers[n - 2])
    # あるいは、numbers をソートした結果 (sorted(numbers))を新規作成する場合
    # print(sorted(numbers)[n-2])


main()
