

def main():
    n = int(input())
    list = [ int(input()) for i in range(n) ]
    result = 0
    for i in range(n):
        for j in range(i+1, n+1):
            #s = 0
            #for k in range(i, j):
            #    s += list[k]
            s = sum(list[i:j])
            result = max(result, s)
    print(result)

main()
