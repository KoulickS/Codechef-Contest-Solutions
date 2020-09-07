T=int(input())
for i in range(T):
	a,b,c,d=map(int,input().strip().split(" "))
	x=int(input())
	f=a/2**(c-1)
	y=(2**(x-1))*f;
	print(int(y))
	
