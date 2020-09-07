#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
#define cc continue
#define bb back
#define e endl
#define re return 0
#define ee end
#define f find
#define b begin
#define se second
#define s size
#define mm map
using namespace std;
int fact(ll n); 
int nCr(ll n,ll r) 
{ 
	return fact(n) / (fact(r) * fact(n - r)); 
} 
int fact(ll n) { 
	ll res = 1,i; 
	for(i=2;i<=n;i++){ 
		res=res*i;
	}
	return res; 
} 

int main(){
	ll T;
	cin>>T;
	while(T--){
		ll n;
		cin >> n;
		ll a=0;
		ll answer = 0;
		ll x=0,k=0;
		mm<ll,vector<ll>>mp;
		mp[0].push_back(0);
		for(auto i=1;i<n+1;i++)
		{
			cin>>a;
			x=x^a;
			mp[x].push_back(i);
		}
		map<ll,vector<ll>>::iterator mt=mp.b();
		vector<ll>::iterator am;
		while(mt!=mp.ee()){
			if((mt->se).s()>1)
			{
				am=(mt->se).b();
				k=-((mt->se).s()-1);
				while(am!=(mt->se).ee())
				{
					answer=answer+k*(*am);
					am++;
					k=k+2;
				}
				answer=answer-((mt->se).s()*((mt->se).s()-1))/2;
			}
			        mt++;
		}
		cout<<answer<<e;
	}
	re;
}