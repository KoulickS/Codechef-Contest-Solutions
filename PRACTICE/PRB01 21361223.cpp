#include<bits/stdc++.h>
using namespace std;
int main()
{
      int T;
      cin>>T;
      while(T--)
      {
        int n,i=1,c=0;
        scanf("%d",&n);
        while(i<=n)
         {
           if(n%i==0)
            c++;
           i++;
         }
         if(c==2)
           printf("yes\n");
         else
           printf("no\n");
       }


}



