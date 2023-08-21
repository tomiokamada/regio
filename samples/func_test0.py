def sum_inc(x, y):
    result = x + y
    x += 1
    print("in sum_inc(), x=" + str(x))
    return result


def main():
    a = 3
    b = sum_inc(a, 4)
    print("in main(): a=" + str(a) 
                 + ", b=" + str(b))


main()
