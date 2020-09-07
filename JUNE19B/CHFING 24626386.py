#Author: Koulick Sadhu
        #Institution: Jalpaiguri Government Engineering College
import math
t=int(input())
for i in range(t):
    n,k=map(int,input().split(" "))
    M = 1000000007
    c=k+n-2 # Finding the sum till nth series
    e=k+n-1
    d=(c)//(n-1)
    v=(d*(d+1))//2 *(k)-(d*(d-1))//2*(e)-d
    v=v%M
    print(v)
    
#CONTRIBUTED BY KOULICK SADHU