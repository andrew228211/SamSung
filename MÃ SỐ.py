n=int(input())
a=[x for x in range(1,n+2)]
check=[0 for i in range(0,n+1)]
b=[x for x in range(1,n+2)]
def xuat():
    for i in range(1,n+1):
        print(chr(64+b[i]),end="")
    for i in range(1,n+1):
        print(a[i],end="")
    print()
def Try1(i):
    global a
    for j in range(1,n+1):
        a[i]=j
        if(i==n):
            xuat()
        else:
            Try1(i+1)
def Try2(i):
    global b
    for j in range(1,n+1):
        if(check[j]==0):
            b[i]=j
            check[j]=1
            if(i==n):
                Try1(1)
            Try2(i+1)
            check[j]=0
Try2(1)
