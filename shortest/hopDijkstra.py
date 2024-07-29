import sys
from heapq import heappush, heappop
#ファイルから読み込みたい場合は、直後の行を有効化してください。完成時は、コメントに戻すのを忘れずに！
#import sys; sys.stdin =  open('hopData/sample.in', 'r', )
ONE_HOP = 10.00001
MAX = sys.float_info.max


def solve() -> float:
    q = []
    cost = [MAX for _ in range(n)]
    start = 0
    goal = n - 1
    cost[0] = 0.0
    heappush(q, [0.0, start])

    while q:
        path, here = heappop(q)
        if cost[here] < path:
            continue
        if here == goal:
            break
        for j in range(1, n):
            if here == j:
                continue
            diff = points[j] - points[here]
            dist = abs(diff)
            if dist > ONE_HOP:
                continue
            next_path = path + dist
            if cost[j] <= next_path:
                continue
            cost[j] = next_path
            heappush(q, [next_path, j])
    return cost[goal] if cost[goal] < MAX else 0.0


while True:
    n = int(input())
    if n == 0:
        exit(0)
    points = [complex(*list(map(int, input().split()))) for _ in range(n)]
    result = solve()
    print(result)
