#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 10000000
#define haha(x) x.begin(),x.end()
#define rs resize
#define remove_zero(str) str.erase(0, str.find_first_not_of('0'));
#define br break
const long long kot = LLONG_MAX;
#define pb push_back
#define pi 3.14159265358979323846
#define pp pop_back
#define pf pop_front
using kk = long double;
#define endl "\n"
#define rese(x,y) memset(x,y,sizeof(x))
#define f first
#define np next_permutation
#define ul unsigned long
#define pii pair<ll,ll>
#define cc continue
#define ee end
#define ii insert
#define fr front
#define mod 1000000007
#define b begin
#define up upper_bound
#define pc pop_back()
//#define mp make_pair
//#define r reverse
#define bb back
#define CHARS_TOTAL 256
#define INT_BITS 32
//typedef std::pair<std::string,std::string>pair;
const ll alpha=1e18;
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std;
ll gcd(ll a, ll b); 
  
// To compute x raised to power y under modulo m 
ll power(ll x, unsigned ll y, unsigned ll m); 
  
// Function to find modular inverse of a under modulo m 
// Assumption: m is prime 
ll modInverse(ll a, ll m) 
{ 
        return power(a, m-2, m); 
} 
  
// To compute x^y under modulo m 
ll power(ll x, unsigned ll y, unsigned ll m) 
{ 
    if (y == 0) 
        return 1; 
    ll p = power(x, y/2, m) % m; 
    p = (p * p) % m; 
  
    return (y%2 == 0)? p : (x * p) % m; 
} 
  
// Function to return gcd of a and b 
ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b%a, a); 
} 
  
void solve(){
    //input
    ll t=1;
    cin>>t; 
    while(t--){  
        ll n;
        cin>>n;
        string str;
        cin>>str;
        ll z=n*(n+1)/2;
        ll i,k;
        string s;
        ll sum=0;
        for(i=0;i<n;i++){
			ll x=0,y=0,c=0;
			for(k=i;k<n;k++){
					//cout<<s[k]<<endl;
					//matcout<<s[k]<<endl;
					if(str[k]==')'){x++;}
					if(str[k]=='('){y++;}
					if(x>y){c++; x--; y++;}
					sum+=c;}
				//c=0;
			}
			//cout<<sum<<endl;
		ll l=modInverse(z,mod);
		ll d=((l)*(sum))%mod;
		cout<<d<<endl;
    }
}
int main()
{
    fio;
    solve();
}
