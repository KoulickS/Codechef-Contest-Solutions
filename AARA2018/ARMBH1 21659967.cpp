#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
       long long int X,N,sum=0,i;
       scanf("%ld%ld",&X,&N);
       for(i=X;i<N;i++)
       {
         if(i%X==0)
           {
             sum=sum+i;
           }
       }
          printf("%ld\n",sum);
    }
       return 0;
}

