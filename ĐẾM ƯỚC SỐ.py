from cmath import sqrt


tohop=[[0] * 1005 for x in range(1005)]
for i in range(1001):
    for j in range(i+1):
        if j==0 and j==i: tohop[i][j]=1
        else:
            tohop[i][j]=tohop[i-1][j-1]+tohop[i-1][j]
while(True):
       n,k=map(int,input().split())
       sum=tohop[n][k]
       cnt=0
       for i in range(1,int(sqrt(sum).real)+1):
           if sum%i==0:
               cnt+=2
       x=int(sqrt(sum).real)
       if x*x==sum:
           cnt-=1
       print(cnt)
