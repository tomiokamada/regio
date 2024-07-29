# デバッガ利用時など標準入力を使いたい場合は、変更を。
# ファイル名は環境によっては 'samples/sample1.txt' などに変更を。
#import sys; sys.stdin = open('sample1.txt', 'r')

s = 0
x = int(input())
s += x
x = int(input())
s += x
x = int(input())
s += x
x = int(input())
s += x
x = int(input())
s += x

print(s)
