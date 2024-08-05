import itertools

lst = list(range(5))
print('lst:', lst)
for v in itertools.permutations(lst, 3):
    print(v)

