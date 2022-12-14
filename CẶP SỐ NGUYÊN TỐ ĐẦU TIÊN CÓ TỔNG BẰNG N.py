f=[True for i in range(1000001)]
def kt():
    f[0]=False
    f[1]=False
    for i in range(2,1001):
        if f[i]==True:
            j=i*i
            while(j<1000001):
                f[j]=False
                j=j+i
kt()
for _ in range(int(input())):
    n=int(input())
    flag=0
    for i in range(1,int(n/2)+1):
        if f[i]==True and f[n-i]==True:
            print(i,n-i)
            flag=1
            break
    if flag==0:
        print(-1)
    