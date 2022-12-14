from itertools import permutations
for _ in range(int(input())):
    n=int(input())
    a=permutations([i for i in range(n,0,-1)])
    for i in a:
        for x in i:
            print(x,end="")
        print(end=" ")
    print()