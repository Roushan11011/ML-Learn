#Fibbonacci series: 0,1,1,2,3,5,...
def fibb(n):
    if n<=1:
        return n;
    dp[n]=fibb(n-1)+fibb(n-2)
    return dp[n];

dp=[0 for x in range(0,1000)]
# or can use dp=[0]*1000
dp[1]=1
print(fibb(6))