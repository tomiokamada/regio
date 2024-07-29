def main():
    n = 5
    numbers = [int(input()) for _ in range(n)]
    numbers.sort()
    print(numbers[n - 2])
    # あるいは、numbers をソートした結果 (sorted(numbers))を新規作成する場合
    # print(sorted(numbers)[n-2])


main()
