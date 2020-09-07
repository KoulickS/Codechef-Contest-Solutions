#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX_LIMIT 100000
int main()
{ 
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     ll T;
     cin>>T;
     while(T--)
     {
       ll i,N,arr[MAX_LIMIT],sum=0;
       cin>>N;
       for(i=0;i<N;i++)
       {
          cin>>arr[i];
          sum=sum+arr[i];
       }
      cout<<sum<<endl;
     }
}