#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
int main()
{
  int T;
  cin>>T; //T=2
  while(T--)
     {
       int N,arr[MAX],i,sum=0,avg,k=false,t=false;
       cin>>N;//N=5
       for(i=0;i<N;i++)
       {
         cin>>arr[i];

         if(arr[i]==5)
            k=true;
         else if(arr[i]==2)
            t=true;
         sum=sum+arr[i];
       }
       avg=(float)sum/N;
       if(avg>=4 && k && !t)
        cout<<"Yes\n";
       else
        cout<<"No"<<endl;
      }
}
