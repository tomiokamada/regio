# デバッガ利用時など標準入力を使いたい場合は、変更を。
# ファイル名は環境によっては 'samples/sample1.txt' などに変更を。
#import sys; sys.stdin = open('sample1.txt', 'r')

s = 0
for j in range(5): # j のように値を使わない変数は _ と書けば省略可能
  x = int(input())
  s += x

print(s)
