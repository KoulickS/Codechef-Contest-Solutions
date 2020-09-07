#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   scanf("%d",&T);
   while(T--)
   {
      int k,n,i,pos,a[100],c;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      scanf("%d",&k);
      pos=a[k-1];
      sort(a,a+n);
      for(i=0;i<n;i++)
      {
      if(pos==a[i])
         c=i;
      }
      printf("%d\n",c+1);
     }
}
