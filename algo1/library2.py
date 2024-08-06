# 標準入力の代わりにファイル（今回は `scope_test_input.txt`）からデータを
# 読み込みたい場合は、直後の行を有効化してください。完成時は、コメントに戻すのを忘れずに！
#import sys; sys.stdin = open('library2_input.txt', 'r')

Q = int(input())
S = [ input() for _ in range(Q) ]
stack = []
done = []

for item in S:
    if item == 'READ':
        read = stack.pop()
        done.append(read)
    else:
        stack.append(item)

for item in done:
    print(item)


