#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 10000000
using namespace std; 
bool sortByVal(const pair<ll, ll> &a, const pair<ll, ll> &b) {
	if(a.second == b.second)return (a.first < b.first);
	return a.second < b.second;
}
ll maxPrimeFactors(ll n) 
{ 
    ll maxPrime = -1; 
    while (n % 2 == 0) { 
        maxPrime = 2; 
        n >>= 1;
    }
    for (ll i = 3; i <= sqrt(n); i += 2) { 
        while (n % i == 0) { 
            maxPrime = i; 
            n = n / i; 
        } 
    } 
    if (n > 2) 
        maxPrime = n; 
    return maxPrime; 
} 
void solve(){
    //input
    ll t=1;
    cin>>t;
    while(t--){
      ll n;
      cin>>n;
      vector<ll>v(n);
      ll i;
      for(i=0;i<n;i++){
		  cin>>v[i];
       }
       vector<ll>vec;
       for(i=0;i<n;i++){
		    ll z=maxPrimeFactors(v[i]);
		    vec.push_back(z);
	   }
	   map<ll,ll>mp;
	   for(i=0;i<vec.size();i++){
		   mp[vec[i]]++;
	   }
	   vector<pair<ll,ll>>v1;
	   for(auto it=mp.begin();it!=mp.end();it++){
		   v1.push_back(make_pair(it->first,it->second));
	   }
	   sort(v1.begin(),v1.end(),sortByVal);
	   reverse(v1.begin(),v1.end());
	   cout<<v1[0].first<<endl;
    }
}
int main()
{
    fio;
    solve();
}
