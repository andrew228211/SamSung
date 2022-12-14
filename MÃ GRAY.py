a=[0 for x in range(15)]
def xuat(n):
    print(a[1],end="")
    for i in range(2,n+1):
        x=a[i]^a[i-1]
        print(x,end="")
    print(end=" ")
def Try(i,n):
    for j in range(2): 
        a[i]=j
        if(i==n):
            xuat(n)
        else:
            Try(i+1,n)    
for _ in range(int(input())):
    n=int(input())
    Try(1,n)
    print()