# デバッグ時、標準入力の代わりにファイルから読込むようにするおまじない
# 読み込みたい場合は、直後の行を有効化してください。完成時は、コメントに戻すのを忘れずに！
#import sys; sys.stdin =  open('signboard_input.txt', 'r', )

N = int(input())
target = input()
result = 0


def try_stride(stride):
    begin = 0
    while begin + stride * (len(target) - 1) < len(line):
        for i in range(len(target)):
            if target[i] != line[begin + i * stride]:
                break
            if i + 1 == len(target):
                return True
        begin += 1
    return False

def check():  # 古い看板 (line) を 1 つチェック
    stride = 1
    while 1 + stride * (len(target) - 1) <= len(line):
        success = try_stride(stride)
        if success:
            return True
        stride += 1
    return False


for _ in range(N):
    line = input()
    if check():
        result += 1

print(result)
