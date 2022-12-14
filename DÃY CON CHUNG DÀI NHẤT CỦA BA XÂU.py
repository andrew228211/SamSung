import numpy as np
for _ in range(int(input())):
    a,b,c=map(int,input().split())
    x,y,z=map(str,input().split())
    f=np.zeros([a+1,b+1,c+1],dtype=int)
    for i in range(a):
        for j in range(b):
            for k in range(c):
                if x[i]==y[j] and y[j]==z[k]:
                    f[i+1,j+1,k+1]=f[i,j,k]+1
                else:
                    f[i+1,j+1,k+1]=max(f[i,j+1,k+1],max(f[i+1,j+1,k],f[i+1,j,k+1]))
    print(f[a,b,c])