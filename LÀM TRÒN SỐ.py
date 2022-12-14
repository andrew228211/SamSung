for _ in range(int(input())):
    n=input()
    l=len(n)
    n=int(n) 
    for i in range(1,l):
        h=0-i
        s=str(n)
        if(s[l-i]=='5'):
            n=n+pow(10,i-1) 
        n=round(n,h)
    print(n)