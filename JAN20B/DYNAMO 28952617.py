import math
t=int(input())
for i in range(t):
    n=int(input())
    x=int(input())
    y=int(2*(10**n))
    print(y+x)
    z=int(input())
    g=int(10**n)-z
    print(g)
    h=int(input())
    h=int(10**n)-h
    print(h)
    k=int(input())
    if(k==-1):
        exit()