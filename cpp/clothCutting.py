def max_profit(length,profit,n):
    dp = [0]*(n+1)
    for i in range(1,n+1):
        for j in range(len(length)):
            if(length[j]<=i):
                dp[i] = max(dp[i],profit[j] + dp[i-length[j]])
    return dp[n]

N = 5
length = [1,2,3,4]
profit = [2,5,7,8]
m = max_profit(length,profit,N)
print(m)