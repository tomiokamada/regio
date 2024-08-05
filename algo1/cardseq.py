import itertools

N = int(input())
K = int(input())
cards = [ int(input()) for _ in range(N) ]

def calc(lst):
    result = 0
    for k in lst:
        if k > 9:
            result = result * 100 + k
        else:
            result = result * 10 + k
    return result

done = {}
for seq in itertools.permutations(cards, K):
    num = calc(seq)
    done[num] = 1

print(len(done))




