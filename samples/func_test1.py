def func(lst0):
    lst0.append(3)
    print("in func(), " + str(lst0))


def main():
    lst = [ 1, 2 ]
    print("before func():" + str(lst))
    func(lst)
    print("after func():" + str(lst))

main()
