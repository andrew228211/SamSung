for _ in range(int(input())):
    n=int(input())
    a=[int(x) for x in input().split()]
    k=0
    Max=[0]*n
    Max[0]=a[0]
    for i in range(1,n):
        Max[i]=max(Max[i-1],a[i])
    Min=[0]*n
    Min[n-1]=a[n-1]
    for i in range(n-2,-1,-1):
        Min[i]=min(Min[i+1],a[i])
    b=[]
    for i in range(0,n-1):
        if(Max[i]<=Min[i+1]):
            b.append(i)
    print(len(b))
    for i in b:
        print(i+1,end=" ")
    print()
            
    
    