import math 
t=int(input())
for i in range(t):
    a,b,n=map(int,input().split(' '))
    z=a**n+b**n 
    c=abs(a-b)
    print(math.gcd(z,c))