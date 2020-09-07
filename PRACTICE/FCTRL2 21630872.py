T=int(input())
while T>0 :
    n=int(input())
    c=1 
    for i in range(1,n+1):
        c=c*i
    print(c)
    T=T-1