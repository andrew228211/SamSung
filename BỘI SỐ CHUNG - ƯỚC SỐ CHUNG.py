import math


for _ in range(int(input())):
    a,b=map(int,input().split())
    usc=math.gcd(a,b)
    print(int(a*b/usc),usc)