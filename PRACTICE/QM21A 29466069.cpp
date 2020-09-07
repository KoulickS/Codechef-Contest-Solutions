#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
void solve(){
    //input
    ll t=1;
   // cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        ll i;
        for(i=0;i<n;i++){
			cin>>v[i];
	    }
	    sort(v.rbegin(),v.rend());
	    for(i=0;i<n;i++){
			cout<<v[i]<<" ";
		}
		cout<<endl;
    }
}
int main()
{
    fio;
    solve();
}
