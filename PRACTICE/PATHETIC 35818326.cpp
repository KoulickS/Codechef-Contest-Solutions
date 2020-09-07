#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 10000000
#define all(x) x.begin(),x.end()
#define rs resize
#define remove_zero(str) str.erase(0, str.find_first_not_of('0'));
#define br break
const long long kot = LLONG_MAX;
#define pb push_back
using namespace std; 
ll const maxn = 1e2+5;
ll const mod = 1e9+7;
vector<ll> v[maxn], color(maxn);
void dfs(ll i, ll p=0, ll c=0){
    color[i] = c;
    for(auto u: v[i]){
        if(u==p)
            continue;
        dfs(u, i, !c);
    }
}
void solve(){
     //input
     ll t=1;
	 cin>>t;
     while(t--){
		ll n;
        cin>>n;
        
        for(ll i=1;i<=n;i++){
            v[i].clear();
            color[i] = 0;
        }
        
        for(ll i=1;i<n;i++){
            ll x,y;
            cin>>x>>y;
            v[x].push_back(y);
            v[y].push_back(x);
        }
        dfs(1);
        for(ll i=1;i<=n;i++)
            cout<< (color[i] ? 1287163410135588463 : 1791200671018648890)<<" ";
        cout<<endl;
     }
}
int32_t main()
{	
     fio;
    //input
   // bru*teforce();
   solve();
}
