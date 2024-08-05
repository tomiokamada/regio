
N = int(input())
nums = list(map(int, input().split()))
first = nums.pop(0)
last = nums.pop(-1)

dp = [0]*21
dp[first] = 1

for num in nums:
    ndp = [0] * 21
    for i in range(21):
        if i + num <= 20:
            ndp[i + num] += dp[i]
        if i - num >= 0:
            ndp[i - num] += dp[i]
    dp = ndp

print(dp[last])


