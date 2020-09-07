#include<stdio.h>
int main()
{
	long long t;
	scanf("%lld",&t);
	while(t>0){
		t--;
		long long n,k,c;
		scanf("%lld%lld",&n,&k);
		c=n/k;
		if(c%k!=0)
		{
		printf("YES\n");
		}
		else
		{
		printf("NO\n");
		}
	}
	return 0;
}