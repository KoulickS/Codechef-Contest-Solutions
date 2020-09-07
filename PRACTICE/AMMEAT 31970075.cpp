#include<bits/stdc++.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 10000000
using ld = long double;
#define endl "\n"
using namespace std; 
ll mini(ll a,ll b){
   return (a<b)?a:b;
}
ll blk=700;
ll getmin(ll l,ll r,ll arr[],ll crr[]){
       ll lb=l/blk;
       ll rb=r/blk;
       ll mn=LLONG_MAX;
       ll i;
       if(lb==rb){
		   	for(i=l;i<=r;i++){
				mn=mini(arr[i],mn);
			}
		}
		else{
			for(i=l;i<blk*(lb+1);i++){
				mn=mini(mn,arr[i]);
			}
			for(i=lb+1;i<rb;i++){
				mn=mini(mn,crr[i]);
			}
			for(i=blk*rb;i<=r;i++){
			    mn=mini(mn,arr[i]);	
			}
		}
	   return mn;
}
void build(ll arr[],ll n,ll brr[],ll crr[]){
	     ll idx=-1;
		 ll block_size=ceil(sqrt(n));
		 ll i;
		 for(i=0;i<n;i++){
			  brr[i]=arr[i];
			  if(i%block_size==0){
				  idx++;
				  crr[idx]=brr[i];
			  }
			  crr[idx]=mini(crr[idx],brr[i]);
		 }
}
void solve(){
    //input
    ll tt=1;
    cin>>tt;
    for(ll d=0;d<tt;d++){
	     ll n,m;
	     cin>>n>>m;
	     ll arr[n];
	     ll i;
	     for(i=0;i<n;i++){
			 cin>>arr[i];
		 }
		 sort(arr,arr+n,greater<ll>());
		 ll c=0,sum=0;
		 for(i=0;i<n;i++){
			 m-=arr[i];
			 c++;
			 if(m<=0)break;
		 }
		 if(m>0){
		 cout<<-1<<endl;
	     }
	     else{
			 cout<<c<<endl;
		 }
   }
}
/*
 3
 1 4 1
 2
 1 1
 1 2
 */
int32_t main()
{
    fio;
    solve();
}
