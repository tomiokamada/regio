# 標準入力の代わりにファイル（今回は `scope_test_input.txt`）からデータを
# 読み込みたい場合は、直後の行を有効化してください。完成時は、コメントに戻すのを忘れずに！
#import sys; sys.stdin = open('japan_sinks_input.txt', 'r')

N = int(input())
As = list(map(int, input().split()))
A_pair = list(enumerate(As))

A_pair.sort(key=lambda x: -x[1])

h_prev = 1000000001
num_islands = 0
islands_max = 0
land=[False]*(N+2)

for i, h in A_pair:
    if h == 0:  # 海のところはパスして、最後で処理
        continue
    if h_prev != h: # 海抜が変わったときの処理
        islands_max = max(num_islands, islands_max)
        h_prev = h

    land[i+1] = True
    if land[i] and land[i+2]: #　島がつながる
        num_islands -= 1
    elif (not land[i]) and (not land[i+2]): # 独立した島が誕生
        num_islands += 1
    # else は、一方のみ島のケースは、島が広がるだけ

islands_max = max(num_islands, islands_max)
print(islands_max)
