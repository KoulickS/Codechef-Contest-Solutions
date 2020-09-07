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
	    ll n,k;
	    cin>>n>>k;
	    ll x;
	    x=n/k;
	    if(x%k==0){ 
	        cout<<"NO"<<endl;
	    }
	    else{ 
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
