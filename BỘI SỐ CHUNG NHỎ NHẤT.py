import math
for _ in range(int(input())):
    a=int(input())
    b=int(input())
    print(int(a*b//math.gcd(a,b)))