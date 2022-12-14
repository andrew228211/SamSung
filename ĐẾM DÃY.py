mod=123456789
def dequy(n,k):
    if k==0:
        return 1
    if k==1:
        return n%mod
    tmp=dequy(n,int(k//2))
    tmp=tmp*tmp%mod
    if k%2==0:
        return tmp%mod
    else:
        return tmp*n%mod
for _ in range(int(input())):
    n=int(input())
    print(dequy(2,n-1))
    