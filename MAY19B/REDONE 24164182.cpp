#include<bits/stdc++.h>
#define MAX_LIMIT 100000
#define llu unsigned long long int
#define ll unsigned long long int
#define pb push_back
#define m 1000000007
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
  fio
  llu i,x=1000000,a[x+1];
  ll c;
  a[0]=1;
   for(i=1;i<=x;i++){
     if(x==1){
        a[i]=1;
     }
     else{
       c=i%m;
       a[i]=(a[i-1]*c)%m;}
   }
  ll T;
  cin>>T;
  while(T--){
      llu n;
      cin>>n;
      cout<<a[n+1]-1<<endl;}
}