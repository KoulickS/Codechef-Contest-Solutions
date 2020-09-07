T=int(input())
f=[1]*(101)
y=1
for j in range(1,101):
    y=y*j
    f[j]=y
while T>0:
    T=T-1
    n,k=map(int,input().split(" "))
    v=[int(k) for k in input().split(" ")]
    v.sort()
    s=0
    u=1
    arr=[0]*(101)
    for i in v:
        arr[i]=arr[i]+1
    t=v[0:k]
    for i in range(0,k):
        s=s+v[i]
    arr1=[]
    for j in t:
        if j not in arr1:
            arr1.append(j)
    for j in arr1:
        if arr[j]>k:
            u=f[arr[j]]//(f[arr[j]-k]*f[k])
        k=k-arr[j]
        if(k<=0):
	        break
    print(u)