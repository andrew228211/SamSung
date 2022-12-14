for _ in range(int(input())):
    n=int(input())
    s=input()
    dp=[[0]*1005 for i in range(1005)]
    for i in range(1,n+1):
        for j in range(1,n+1):
            if(s[i-1]==s[j-1] and i!=j):
                dp[i][j]=dp[i-1][j-1]+1
            else:
                dp[i][j]=max(dp[i-1][j],dp[i][j-1])
    print(dp[n][n])
