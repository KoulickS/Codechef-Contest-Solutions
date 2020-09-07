#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  scanf("%d",&T);
  while(T--)
  {
    int A;
    float B;
    int C;
    scanf("%d",&A);
    scanf("%f",&B);
    scanf("%d",&C);
    if(A>50 &&  B<0.7  && C>5600)
     {
       printf("10\n");
     }
     else if(A>50 &&  B<0.7)
     {
       printf("9\n");
     }
    else if( B<0.7  && C>5600)
     {
       printf("8\n");
     }
   else  if(A>50 && C>5600)
     {
       printf("7\n");
     }
    else if(A>50 || B<0.7 || C>5600)
     {
       printf("6\n");
     }
     else
     {
     printf("5\n");
     }
  }
}
