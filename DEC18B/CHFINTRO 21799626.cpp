#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,r,i,t;
   scanf("%d%d",&n,&r);
   for(i=0;i<n;i++)
   {
       scanf("%d",&t);
       if(t>=r)
         {
           printf("Good boi\n");
         }
       else
         {
         printf("Bad boi\n");
         }
   }
}
