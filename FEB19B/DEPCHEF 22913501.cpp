#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
   {
      int N;
      cin>>N;
      int a[N],d[N],ans=0;
      for(int i=0;i<N;i++)
       cin>>a[i];
      for(int i=0;i<N;i++)
       cin>>d[i];
      for(int i=0;i<N;i++)
       {
         if(i>0&&i<N-1)
           {
             if(a[i-1]+a[i+1]-d[i]<0)
              {
                if(d[i]>ans)
                 ans=d[i];
              }
           }
          else if(i==0)
           {
               if(a[N-1]+a[i+1]-d[i]<0)
              {
                if(d[i]>ans)
                 ans=d[i];
              }
           }
          else if(i==N-1)
           {
               if(a[i-1]+a[0]-d[i]<0)
              {
                if(d[i]>ans)
                 ans=d[i];
              }
           } 
        }  
        if(ans==0)
         cout<<"-1"<<endl;
        else 
         cout<<ans<<endl;    
   }
    return 0;  
}