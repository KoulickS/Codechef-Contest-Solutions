#include<bits/stdc++.h>
using namespace  std;
 
typedef  long  long  ll;
typedef  vector<ll> vi;
#define  fast ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define  pb push_back
#define  all(x) x.begin(), x.end()
const ll mod = (ll)(1e9 + 7); 

ll cmp(pair<ll,ll> p1,pair<ll,ll> p2)
{
    if(p1.first==p2.first)
     return p1.second<p2.second;
    return p1.first>p2.first;

}
void solve()
{
	ll n,k;
	cin>>n>>k;
	vi a(n);
	for(ll i=0;i<n;i++)cin>>a[i];
	ll bits[35]={0};
	for(ll i=0;i<n;i++)
	{
		bitset<35> use(a[i]);
		for(ll j=0;j<35;j++)
		{
			if(use[j]==1)
				bits[j]++;
		}
	}
	// for(int i=0;i<35;i++)
	// 	cout<<bits[i]<<" ";cout<<endl;
	vector<pair<ll,ll>>v;
	ll x=1;
	for(ll i=0;i<35;i++)
	{
		if(i==0){
			v.push_back({bits[i],i});
		}
		else{
			x=x*2;
			v.push_back({bits[i]*x,i});
		}
	}
	sort(v.begin(),v.end(),cmp);
	ll sum=0;
	for(ll i=0;i<k;i++){
		sum+=pow(2,v[i].second);
	}
	cout<<sum<<endl;
}

int main()
{

fast
int t; cin>>t;while(t--) 
solve();
}
