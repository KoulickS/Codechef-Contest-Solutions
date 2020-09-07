w,b = [float(x) for x in input().split()]
w=int(w)
b=float(b)
if w%5==0 and (w+0.5)<=b:
    print(b-w-0.5)
else:
    print(b)