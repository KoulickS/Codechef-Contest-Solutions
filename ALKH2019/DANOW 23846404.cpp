#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
int main()
{
 long long n,i,q,res=0,a[MAX], b[MAX]; 
 cin>>n>>q;
 for(i=0;i<n;i++)
      cin>>a[i];
 for(i=0;i<n;i++)
      cin>>b[i];
 while(q--)
 {
  long long x,y; cin>>x>>y;
  for(i=x;i<=y;i++)
       {
         res+=(a[i-1]*b[i-1]);
       }
   cout<<res<<endl;
   res=0;
  }
  return 0;
}