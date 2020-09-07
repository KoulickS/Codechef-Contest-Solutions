t=int(input())
for i in range(t):
    n,k=map(int,input().split())
    l=list(map(int,input().split()))
    s=""
    for j in range(n):
        if(l[j]%k==0):
            s=s+"1"
        else:
            s=s+"0"
    print(s)