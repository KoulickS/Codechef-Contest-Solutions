#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin>>n;
    ll i,j;
    map<ll,ll>mp;
    ll arr[n];
    for(i=0;i<n;i++){
		cin>>arr[i];
		
	}
	ll ans=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			ans+=abs(arr[i]-arr[j]);
		}
	}
	cout<<ans<<endl;
    
}
