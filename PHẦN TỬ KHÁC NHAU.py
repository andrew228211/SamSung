for _ in range(int(input())):
    m,n,k=map(int,input().split())
    a=[int(x) for x in input().split()]
    for i in input().split():
        a.append(int(i))
    a.sort()
    print(a[k-1])   