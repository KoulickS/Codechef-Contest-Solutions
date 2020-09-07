#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve(){
    //input
    ll t=1;
    cin>>t;
    while(t--){
	    ll n,k;
	    cin>>n>>k;
	    ll arr[n];
	    ll i=0,j=0;
	    for(i=0;i<n;i++){
			cin>>arr[i];
		}
		ll freq[100001]={0};
		ll x=0,y=0;
		for(i=0,j=0;j<n;){
			x+=!freq[arr[j++]]++;
			while(x==k){
				x-=!--freq[arr[i++]];
			}
			y=max(y,j-i);
		}
		cout<<y<<endl;
     } 
}
int main()
{
    fio;
    solve();
}
