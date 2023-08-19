# デバッガ利用時など標準入力を使いたい場合は、変更を。
# ファイル名は環境によっては 'samples/sample1.txt' などに変更を。
# input = open('sample1.txt', 'r').readline

a = []
for i in range(5):
  a.append(int(input()))  

s = 0
for i in range(5):
  s += a[i]

print(s)
