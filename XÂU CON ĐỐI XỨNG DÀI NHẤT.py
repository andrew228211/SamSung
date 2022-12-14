for _ in range(int(input())):
    s=input()
    dp=[[0 for j in range(1005)] for i in range(1005)]
    n=len(s)
    for i in range(n):
        dp[i][i]=1
    res=1
    for i in range(1,n):
        for j in range(0,n-i):
            x=i+j
            if s[j]==s[x] and i>1:
                dp[j][x]=dp[j+1][x-1]
            elif s[j]==s[x] and i==1:
                dp[j][x]=1
            else:
                dp[j][x]=0
            if dp[j][x]==1:
                res=max(res,x-j+1)
    print(res)
   