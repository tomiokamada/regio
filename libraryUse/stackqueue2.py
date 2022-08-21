from collections import deque
from heapq import heappush, heappop


def sample_complex(i: int) -> complex:
    val = 3 * i % 10
    return val + (10 - val) * 1j


def main():
    stack = deque()
    queue = deque()
    priq = []
    priq2 = []

    for i in range(10):
        val = sample_complex(i)
        stack.append(val)
        queue.append(val)
        heappush(priq, [val.imag, val])
        heappush(priq2, [abs(val), val.real, val])

    print("stack:")
    while stack:
        print(stack.pop())

    print("queue:")
    while queue:
        print(queue.popleft())

    print("priority queue:")
    while priq:
        pri, val = heappop(priq)
        print(val)
    print("priq2")
    while priq2:
        pri1, pri2, val = heappop(priq2)
        print(val)


main()
