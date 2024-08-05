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


