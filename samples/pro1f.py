# デバッガ利用時など標準入力を使いたい場合は、変更を。
# ファイル名は環境によっては 'samples/sample1.txt' などに変更を。
# input = open('sample1.txt', 'r').readline

lst = [ int(input()) for _ in range(5) ]

s = 0
for v in lst:
  s += v

print(s)

# 単に sum(lst) で合計値を求めることも可能
print(sum(lst))
