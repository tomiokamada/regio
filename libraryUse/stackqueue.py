from collections import deque
from heapq import heappush, heappop


def main():
    stack = deque()
    queue = deque()
    priq = []
    priq2 = []

    for i in range(10):
        val = 3 * i % 10
        stack.append(val)
        queue.append(val)
        heappush(priq, val)
        heappush(priq2, [-val, val])

    print("stack:")
    while stack:
        print(stack.pop())

    print("queue:")
    while queue:
        print(queue.popleft())

    print("priority queue:")
    while priq:
        print(heappop(priq))
    print("priq2")
    while priq2:
        pri, val = heappop(priq2)
        print(val)


main()
