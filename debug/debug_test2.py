now = 0.1
result = 0.0
count = 1

# 0.1*0.1 + 0.2*0.2 + ... + 0.9*0.9 をするつもりのプログラム
# now を 0.1, 0.2 と進めていく
while now < 1.0:
    result += now * now
    now += 0.1
    count += 1
print("result:", result)

# 1^2 + 2^2 + ... + n^2 = n*(n+1)*(2n+1)/6 なので、
ans = (9 * 10 * 19)/600.0
print("Ans:", ans)


