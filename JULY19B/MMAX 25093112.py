T=int(input())
for i in range(T):
    n=int(input())
    k=int(input())
    a=k%n
    b=a;
    c=n-a;
    if b==c:
        print((2*(b-1))+1)
    else:
        print((2*min(b,c)))
