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
#define pi acos(-1)
#define pp pop
#define pf pop_front
using ld = long double;
#define endl "\n"
#define rese(x,y) memset(x,y,sizeof(x))
#define ss second
#define forn(i, n) for (ll i = 0; i < ll(n); i++)
#define np next_permutation
const int MAXIT = 100; 
#define ul unsigned long
#define pii pair<ll,ll>
#define cc continue
#define ee end
#define ii insert
#define fr front
#define mod 10000000007
#define pbb pop_back
#define dd distance
#define up upper_bound
#define pc pop_back()
#define pu push
#define to top
//#define r reverse
#define bb back
#define CHARS_TOTAL 256
#define INT_BITS 32 
#define SIZE 26
//#pragma GCC optimize "trapv"
//#define _GLIBCXX_DEBUG
//typedef std::pair<std::string,std::string>pair;
const ll alpha=1e18;
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std; 
ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
}
ll powe(ll x, unsigned ll y) 
{ 
    ll res = 1;      // Initialize result 
  
     // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x); 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x);   
    } 
    return res; 
} 
// Function to return LCM of two numbers
 ll lcm(ll a, ll b)
 {
    return (a*b)/gcd(a, b);
 } 
bool isPerfectSquare(long double x)
{
  long double sr = sqrt(x);
  return ((sr - floor(sr)) == 0);
}
bool comp(ll a, ll b)
{
    return (a < b);
}
vector<ll>divisors(ll n)
{
	vector<ll>ve;
    for (ll i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                ve.pb(i);
 
            else // Otherwise print both
            ve.pb(i);
            ve.pb(n/i);
        }
    }
    return ve;
}
  
bool isPrime(ll n) {
 
    if (n == 1) {
        return false;
    }
 
    ll i = 2;
 
    while (i*i <= n) {
 
        if (n % i == 0) {
             return false;
        }
        i += 1;
    }
    return true;
}
ll gcdofarray(vector<ll>&v, ll n)
{
    ll result = v[0];
    for (ll i = 1; i < n; i++)
        result = gcd(v[i], result);
    return result;
}
 
ll sumofdigits(ll n){
        ll sum=0;
        while(n>0){
            sum+=n;
            n/=10;
        }
        return sum;
}
bool powertwo(ll x){
  return x&& (!(x&(x-1)));
}
string removeDuplicatesFromString(string str)
{
    ll counter = 0;
 
    ll i = 0;
    ll size = str.size();
    ll x;
 
    // keeps track of length of resultant string
    ll length = 0;
 
    while (i < size) {
        x = str[i] - 97;
 
        // check if Xth bit of counter is unset
        if ((counter & (1 << x)) == 0) {
 
            str[length] = 'a' + x;
 
            // mark current character as visited
            counter = counter | (1 << x);
 
            length++;
        }
        i++;
    }
 
    return str.substr(0, length);
}
ll commDiv(ll a,ll b)
{
    // find gcd of a,b
    ll n = gcd(a, b);
 
    // Count divisors of n.
    ll result = 0;
    for (ll i=1; i<=sqrt(n); i++)
    {
        // if 'i' is factor of n
        if (n%i==0)
        {
            // check if divisors are equal
            if (n/i == i)
                result += 1;
            else
                result += 2;
        }
    }
    return result;
}
ll kash(ll a,ll b){
    return (a*b)/gcd(a,b);
}
ll maxi(ll a,ll b){
   return (a>b)?a:b;
}
ll mini(ll a,ll b){
   return (a<b)?a:b;
}
bool sortByVal(const pair<ll,pair<ll,ll>> &a, const pair<ll,pair<ll,ll>> &b){ 
	
	if(a.second.second==b.second.second){
		if(a.second.first==b.second.first){
			return a.first>b.first;
		}
		else{
			return a.second.first>b.second.first;
		}
	}
	return a.second.second<b.second.second;
} 

//vector<ll>arr[1001];
//ll vis[1001];
//pair<ll,ll>p[1001];
/*void dfs(ll node){
	if(vis[node])return;
	vis[node]=1;
	for(ll i=0;i<n;i++){
		if (p[i].first == p[node].first || p[node].second == p[i].second){
			dfs(i);
		}
	}
}*/
ll check(ll arr[],ll n,ll v){
	ll dp[v+1];
	dp[0]=0;
	ll i,j;
	for(i=1;i<=v;i++){
		dp[i]=INT_MAX;
	}
	for(i=1;i<=v;i++){
		for(j=0;j<n;j++){
			if(arr[i]<=i){
				ll y=dp[i-arr[j]];
				if(y!=INT_MAX && y+1<arr[i]){
					dp[i]=y+1;
				}
			}
		}
	}
	return dp[v];
}

bool isvowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i'|| ch=='o'|| ch=='u'){
		return true;
	}
	return false;	
}
ll power(ll x,ll y, ll p)  
{  
    ll res = 1;     // Initialize result  
  
   // x = x % p; // Update x if it is more than or  
                // equal to p  
  
    while (y > 0)  
    {  
        // If y is odd, multiply x with result  
        if (y & 1)  
            res = (res*x) % p;  
  
        // y must be even now  
        y = y>>1; // y = y/2  
        x = (x*x) % p;  
    }  
    return res;  
} 
ll parent[100001];
ll find(ll a){
    while(parent[a]>0){
		a=parent[a];
	}	
	return a;
}
void Union(ll a,ll b){
     parent[a]+=parent[b];
     parent[b]=a;	
}
bool ispalind(string str){
     string s=str;
     //reverse(str.begin(),str.end());
     if(s==str)return true;
     return false;	
}/*
ll arr[3];
ll I[3][3],T[3][3];
void mul(ll A[3][3],ll B[3][3],ll dim){
        ll res[dim+1][dim+1];
        ll i,j,k;
        for(i=1;i<=dim;i++){
			for(j=1;j<=dim;j++){
				res[i][j]=0;
				for(k=1;k<=dim;k++){
					//res[i][j]+=A[i][j]*B[k][j];
					ll x=(A[i][k]*B[k][j])%mod;
					res[i][j]=(res[i][j]+x)%mod;
				}
			}
		}	
 	    for(i=1;i<=dim;i++){
			for(j=1;j<=dim;j++){
				A[i][j]=res[i][j];
			}
		}	
}


ll getfib(ll n){
     if(n<=2) return arr[n];
     I[1][1]=I[2][2]=1;
     I[1][2]=I[2][1]=0;
     
     T[1][1]=0;
     T[1][2]=-1;
     T[2][1]=1;
     T[2][2]=3;
     n=n-1;
     while(n){
		if(n%2==1){
			mul(I,T,2);
			n--; 
		}
		else{
			mul(T,T,2);
			n=n/2;
		}
	 }
	 ll x=(arr[1]*I[1][1]+arr[2]*I[2][1])%mod;
	 return x;
}*/
/*vector<ll>graph[103];
bool vis[103];
void dfs(ll u){
    if(vis[u]) return;
    vis[u]=true;
    for(auto it:graph[u]){
		dfs(it);
	}
}*/ 
//3->8
//s->

//2 3 1
//2 2 2
//1
struct compare { 
    bool operator()(const pair<ll,ll>& value,  
                                const ll& key) 
    { 
        return (value.first < key); 
    } 
    bool operator()(const ll& key,  
                    const pair<ll,ll>& value) 
    { 
        return (key < value.first); 
    } 
}; 
void solve(){
    //input
    ll n;
    cin>>n;
    ll arr[n],brr[n];
    ll i;
    vector<ll>v(n+n);
    for(i=0;i<n;i++){
		cin>>arr[i];
		v.pb(arr[i]);
	}
	for(i=0;i<n;i++){
		cin>>brr[i];
		v.pb(brr[i]);
	}
	/*for(auto it=mp.begin();it!=mp.end();it++){
		v.pb(it->first);
	}*/
	/*for(auto it:v){
		cout<<it<<" ";
	}*/
	ll xo=v[0];
	for(i=1;i<v.size();i++){
		xo^=v[i];
	}
	if(xo>0){
		cout<<"-1"<<endl;
		return;
	}
	vector<ll>v1(n+n);
	sort(arr,arr+n);
	sort(brr,brr+n);
	/*vector<ll>::iterator ls;
	ls=set_intersection(arr,arr+n,brr,brr+n,v1.begin(),comp);
	for(auto it:v1){
		cout<<it<<" ";
	}
	v1.erase(std::remove(begin(v1), end(v1), 0), end(v1));
	/*for(auto it:v1){
		cout<<it<<" ";
	}*/
	ll c=0;
	for(i=0;i<n;i++){
		if(arr[i]==brr[i]){
			c++;
		}
	}
	if(c==n){
		cout<<0<<endl;
		return;
	}
	//1 1 1 1 2 2
	//3 3 4 4 1 1
	/*mp-
	  1->6  3 //0
	  2->2  1 //0
	  3->2  1 //0
	  4->2  1 //0
	  1 2  3 4
	   */ 
	 map<ll,ll>mp,mp1;
	 for(i=0;i<n;i++){
		 mp[arr[i]]++;
		 mp[brr[i]]++;
	 }
	 vector<pair<ll,ll>>vec;
	 for(auto it=mp.begin();it!=mp.end();it++){
		 ll z=it->first;
		 ll y=it->second;
		 vec.pb({z,y});
	}
	vector<pair<ll,ll>>vec1;
	vec1=vec;
	for(i=0;i<vec1.size();i++){
		vec[i].second=vec[i].second/2;
		//cout<<vec[i].second<<endl;
	}
	/*for(auto it:vec1){
		cout<<it.first<<" "<<it.second<<endl;
	}*/
	vector<pair<ll,ll>>vec2;
	vec2=vec1;	
	ll mn=mini(*min_element(arr,arr+n),*min_element(brr,brr+n));
	/* vector<ll>vec,vec1;
	 for(auto it:mp){
		 if(it.second>1){
			 vec.pb(it.first);
		 }
	 }
	 for(auto it:mp1){
		 if(it.second>1){
			 vec1.pb(it.first);
		 }
	 }
	 for(auto it:vec){
		 cout<<it<<" ";
	 }
	 cout<<endl;
	  for(auto it:vec1){
		 cout<<it<<" ";
	 }
	 cout<<endl;*/
	 map<ll,ll>mp2;
	 for(auto it:vec1){
		 mp2.insert({it.first,it.second/2});
	 }
	 /*for(auto it:mp2){
		 cout<<it.first<<" "<<it.second<<endl;
	 }*/
	 map<ll,ll>mp3;
	 mp3=mp2;
	 vector<ll>k1;
	 vector<ll>k2;
	 for(i=0;i<n;i++){
		 ll z=arr[i];
		 if(mp2[z]==0)k1.pb(arr[i]);
		 else mp2[z]--;
	 }
	 /*for(auto it:mp2){
		 cout<<it.first<<" "<<it.second<<endl;
	 }*/
	 //cout<<endl;
	 for(i=0;i<n;i++){
		 ll z=brr[i];
		 if(mp3[z]==0)k2.pb(brr[i]);
		 else mp3[z]--;
	 }
	 /*for(auto it:mp3){
		 cout<<it.first<<" "<<it.second<<endl;
	 }*/
	 /*for(auto it:k1){
		 cout<<it<<" ";
	 }
	 cout<<endl;
	 for(auto it:k2){
		 cout<<it<<" ";
	 }*/
	 sort(all(k1));sort(all(k2));reverse(all(k2));
	 vector<ll>k3;
	 for(i=0;i<k1.size();i++){
		 k3.pb(mini(k1[i],k2[i]));
	 }
	 sort(all(k3));
	 ll sum=0;
	 for(i=0;i<k3.size();i++){
		 ll z=mini(mn*2,k3[i]);
		 sum+=z;
	 }
	 cout<<sum<<endl;
}
int32_t main()
{	
     fio;
    //input
   // bruteforce();
   ll t=1;
   cin>>t;
   while(t--){
   	  solve();
   }
}


