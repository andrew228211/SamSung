import math
def sangnguyento(a):
    a[0]=0
    a[1]=0
    for i in range(2,1001):
        if a[i]==1:
            j=i*i
            while(j<1000001):
                a[j]=0
                j=j+i
a=[1]*1000001
sangnguyento(a)
def thuannghich(a):
    x=str(a)
    s=x[::-1]
    if(s==x):
        return 1
    return 0
for _ in range(int(input())):
    x,y=map(int,input().split())
    cnt=0
    for i in range(x,y+1):
        if(a[i]==1 and thuannghich(i)==1):
            print(i,end=" ")
            cnt+=1
        if(cnt==10):
            print()
            cnt=0
    print()