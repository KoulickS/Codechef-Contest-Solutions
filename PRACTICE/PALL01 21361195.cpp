#include<bits/stdc++.h>
int main()
{
      int T;
      scanf("%d",&T);
      while(T--)
      {
        int N,k,r,c=0;
        scanf("%d",&N);
        k=N;
        while(N>0)
        {
         r=N;
         c=c*10+r;
         N=N/10;
        }

        if(c==k)
         {
          printf("wins\n");
         }
        else
         {
          printf("losses\n");
         }
      }
    return 0;

}



