n=int(input())
for i in range(n):
    if i%2==0:
        print(0,end=" ")
    else:
        print(1,end=" ")
print()
for i in range(n):
    if i%2==0:
        print(1,end=" ")
    else:
        print(0,end=" ")