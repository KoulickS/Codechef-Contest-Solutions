T = int(input())
for i in range(T):
	N = int(input())
	S = input()
	K = input()
	if(S.count('1')==K.count('1') and S.count('0')==K.count('0')):
		print('YES')
	else:
		print('NO')