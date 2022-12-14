n=int(input())
a=[int(x) for x in input().split()]
sum=0
for i in range(n):
    if(a[i]>0):
        sum+=a[i]*2
print(sum)