T=int(input())
for i in range(T):
	l=0
	nnn,qqq=[int(x) for x in input().split(" ")]
	aaa=[i for i in range(1,nnn+1)]
	for j in range(qqq):
		ccc=[int(x) for x in input().split()]
		if(ccc[0]==1):
			aaa[ccc[1]+l-1]=0
		else:
			for kkk in range(ccc[2]+l-1,-1,-1):
				if(aaa[kkk]!=0):
					break
			if(kkk>=ccc[1]+l-1):
				kaa=aaa[kkk]
			else:
				kaa=0
			print(kaa)
			l=(l+kaa)%nnn
			l=l%nnn
			
					
				
			
	
	