#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	   int A,B,C,D;
	   scanf("%d%d%d%d",&A,&B,&C,&D);
       if(A==C)
       {
           if(B>D)
            printf("down\n");
           else
            printf("up\n");
       }
       else if(B==D)
       {
           if(A>C)
            printf("left\n");
           else
            printf("right\n");
       }
       else
        printf("sad\n");
	}
     return 0;
}

