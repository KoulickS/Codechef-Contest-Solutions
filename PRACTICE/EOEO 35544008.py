t=int(input())
for i in range(t):
    ans=0
    ts=int(input())
    while(ts%2==0):
        ts=ts//2
    ts=int(ts)
    if ts%2!=0:
        ans=ts//2
    print(ans)