#include<stdio.h>
int main()
{
  long long int T;
   scanf("%lld",&T);
   while (T--)
	{
	    long long int x,y,K,a,b,c=0;
            scanf("%lld %lld %lld",&x,&y,&K);
          c=(x+y)/K;
            if(c%2==0)
             {
              printf("CHEF\n");
             } 
            else
             {
              printf("COOK\n");
             }
        }
        return 0;
}