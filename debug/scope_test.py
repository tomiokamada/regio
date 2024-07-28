# 入力フォーマット
# N
# line1
# ...
# lineN
# 一番多く a を含む行を出力せよ。同じ a の個数の場合は、最初に現れたものを出力すること
# 入力例
# 3
# abcdabcaba
# aaabbaac
# aaaccaac

N = int(input())  # このあたりはグローバル変数
kouho = ""
max_count = -1
g_ans = 0


def count_a(line):  #line はローカル変数
    num_a = 0   # num_a, c はローカル変数
    for c in line:
        if c == 'a':
            num_a += 1
    g_ans = num_a  # 実はグローバル変数アクセス「じゃない」
    return num_a


for _ in range(N):
    line0 = input()    # このあたりもグローバル変数
    ans0 = count_a(line0)  # このあたりもグローバル変数
    print(line0, ans0, g_ans, max_count)
    if ans0 > max_count:
        kouho = line0
        max_count = ans0

print(kouho)
