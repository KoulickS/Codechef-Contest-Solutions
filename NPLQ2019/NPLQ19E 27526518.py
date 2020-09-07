T=int(input())
mod=1000000007
for i  in range(T):
    N=int(input())
    if N==0:
        print 0,0
        continue
    even=pow(2,N-1,mod)-1+mod
    even=even%mod
    odd=pow(2,N-1,mod)
    print even,odd