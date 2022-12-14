from cmath import sqrt
from operator import truediv
import math
def f(x):
    if(x<2): return 0
    for i in range(2,int(sqrt(x).real)+1):
        if x%i==0: return 0
    return 1

def doi(y):
    sum=0
    while(y>0):
        u=y%10
        sum=sum+u
        if(u!=2 and u!=3 and u!=5 and u!=7): 
            return 1
        y=y//10
    if(f(sum)==0): return 1
    return 0
for _ in range(int(input())):
    x,y=map(int,input().split())
    cnt=0
    for i in range(x,y+1):
        if(f(i)==1 and doi(i)==0):
            cnt+=1
    print(cnt)