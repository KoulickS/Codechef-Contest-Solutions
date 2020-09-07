#include <stdio.h>

int main()
{
   int T;
   scanf("%d",&T);
   while(T--)
    {
    int n,sum = 0,remainder;
 	scanf("%d", &n);

  	 while (n>0)
  		 {
    		  remainder = n % 10;
     		  sum       = sum + remainder;
     		  n         = n / 10;
         }
         printf("%d\n",sum);
    }
}
