#include<stdio.h>
int main()
{
	int A,B;
	char C;
	scanf("%d %d %c",&A,&B,&C);
	switch(C)	
	{
	case '+':
	printf("%d",A+B);
	break;
	case '-':
	printf("%d",A-B);
	break;
        case '*':
	printf("%d",A*B);
	break;
	default:
	printf("%f",(double)((double)A/(double)B));
	}
   return 0;
}