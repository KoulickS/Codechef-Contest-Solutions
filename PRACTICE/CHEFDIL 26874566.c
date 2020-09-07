#include <stdio.h>
#include<string.h>
int main() {
	long long t;
	scanf("%lld",&t);
	while(t>0)
	{
	    t--;
	    char s[100000];
	    scanf("%s",s);
	    long long i,c=0;
	    for(i=0;i<strlen(s);i++)
	    {
	        if(s[i]=='1')
	        c++;
	    }
	    if(c&1)
	    printf("WIN\n");
	    else
	    printf("LOSE\n");
	}
	return 0;
}