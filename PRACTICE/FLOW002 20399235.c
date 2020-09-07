#include <stdio.h> 

int main()
 {
	
	int k,T;
	scanf("%d",&T);
	
	for(k=1;k<=T;k++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",a%b);
	}
}