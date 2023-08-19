# デバッガ利用時など標準入力を使いたい場合は、変更を。
# ファイル名は環境によっては 'samples/sample1.txt' などに変更を。
# input = open('sample2.txt', 'r').readline

# 1行に数字が列挙されている場合は、行を split() してから
num_strs = input().split()
# 各要素に int を施したものを list として扱う (map の返り値は iterator)
lst = list(map(int, num_strs))

s = 0
for v in lst:
  s += v

# iterator のまま使う場合はこんな感じ。
# itr = map(int, num_strs)
# for v in itr:
#   s += v  

print(s)
