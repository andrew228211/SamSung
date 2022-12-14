import math


for _ in range(int(input())):
    n=int(input())
    a=[int(x) for x in input().split()]
    f=[0]*n
    f[0]=a[0]
    Max=a[0]
    for i in range(1,n):
        if(f[i-1]+a[i]>a[i]):
            f[i]=f[i-1]+a[i]
        else:
            f[i]=a[i]
        Max=max(Max,f[i])
    print(Max)