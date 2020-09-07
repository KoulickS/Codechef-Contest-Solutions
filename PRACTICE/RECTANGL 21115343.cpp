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
        if(A==B && C==D)
          {
            printf("YES\n");
          }
        else if(A==C && B==D)
          {
            printf("YES\n");
          }
        else if(A==D && B==C)
            {
            printf("YES\n");
            }
        else
         {
           printf("NO\n");
         }
     }
}
