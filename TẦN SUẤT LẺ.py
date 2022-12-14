for _ in range(int(input())):
    n=int(input())
    a=[int(i) for i in input().split()]
    X=set(a)
    for i in X:
        if a.count(i)%2!=0:
            print(i)
            break