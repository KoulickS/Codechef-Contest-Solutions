#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   cin>>T;
   while(T--)
   {
     int a,b,c;
     cin>>a>>b;
     c=a*b;
     if(c%2==0)
     {
     cout<<"YES"<<endl;
     }
     else
     {
     cout<<"NO"<<endl;
     }
   }
}