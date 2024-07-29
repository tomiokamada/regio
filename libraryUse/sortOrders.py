# debugの時はファイルから読み込む方が楽
# 環境によっては、 `libraryUse/data4sortOrders/input/input1.txt` などに変更しましょう
#import sys; sys.stdin = open('data4sortOrders/input/input5.txt', 'r')


def main():
    n = int(input())
    orders = {}
    for _ in range(n):
        name, num0 = input().split()
        prev = orders.get(name, 0)
        orders[name] = prev+int(num0)
    sorted_keys = sorted(orders.keys())
    sorted_keys.sort(key=lambda n0: len(n0))
    for key in sorted_keys:
        print(key)
        print(orders[key])


main()
