#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
    {
       double A,B,C;
      scanf("%lf%lf",&A,&B);
      if(A<1000)
      	{
      	 C=A*B;
      	 }
      else
      {
        C=A*B-(A*B*0.1);
      }
      printf("%.6lf\n",C);
    }
  }
