#include<bits/stdc++.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 10000000
#define all(x) x.begin(),x.end()
#define rs resize
#define remove_zero(str) str.erase(0, str.find_first_not_of('0'));
#define br break
const long long kot = LLONG_MAX;
#define pb push_back
#define pi 3.14159265358979323846
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
#define mod 1000000007
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
const ll alph=1e18;
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std; 
string alpha = "abcdefghijklmnopqrstuvwxyz";  
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
vector<ll>ve;
void divisors(ll n)
{
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
ll fact(ll n)
{
    if (n <= 1)
        return 1;
    return n * fact(n - 1);
}
 
ll nPr(ll n, ll r)
{
    return fact(n) / fact(n - r);
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
ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
bool sortByVal(const pair<ll, ll> &a, const pair<ll, ll> &b) { 
    return (a.second < b.second); 
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
ll maxSubArraySum(ll a[], ll size) 
{ 
    ll max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (ll i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
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
ll b[1100000];
void kmpPreprocess(string substr)
{
   const ll m = substr.length();
   ll i = 0, j = -1;

    b[i] = -1;
    while(i < m)
    {
        while(j >= 0 && substr[i] != substr[j])
            j = b[j];

		i++;
        j++;
        b[i] = j;
    }
}

ll kmp(string str, string substr)
{
    ll i=0, j=0, count = 0;
    const ll n = str.length();
    const ll m = substr.length();

	kmpPreprocess(substr);
    while (i<n)
    {
        while (j>=0 && str[i]!=substr[j])
            j=b[j];

        i++;
        j++;

        if (j==m)
        {
            count++;
            j=b[j];
        }
    }
    return count;
}
ll countFreq(string &pat, string &txt) 
{ 
    ll M = pat.length(); 
    ll N = txt.length(); 
    ll res = 0; 
    
    /* A loop to slide pat[] one by one */
    for (ll i = 0; i <= N - M; i++) 
    {  
        /* For current index i, check for  
           pattern match */
        ll j; 
        for (j = 0; j < M; j++) 
            if (txt[i+j] != pat[j]) 
                break; 
   
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1] 
        if (j == M)   
        { 
           res++; 
           j = 0; 
        } 
    } 
    return res; 
} 
void solve(){
    //input
    ll tt=1;
    cin>>tt;
    for(ll d1=0;d1<tt;d1++){
	     string a,b1;
	     cin>>a>>b1;
	     ll i,j;
	     //string pref,suff;
	     vector<string>v,v1;
	     string s="";
	     for(i=0;a[i];i++){
			s+=a[i];
			v.pb(s);
		 }
		 /*for(auto it:v){
			cout<<it<<endl;
		 }*/
		// cout<<"--------------"<<endl;
		 string s1="";
	     for(i=0;b1[i];i++){
			s1=b1.substr(b1.length()-i);
			v1.pb(s1);
		 }
		 reverse(v1.begin(),v1.end());
		 v1.insert(v1.begin(),b1);
		 /*for(auto it:v1){
			 cout<<it<<endl;
		 }*/
		 vector<string>ans;
		 for(i=0;i<v.size();i++){
			 for(j=0;j<v1.size();j++){
				 string pref=v[i]+v1[j];
				 ans.pb(pref);
			 }
		 }
		 /*for(auto it:ans){
			 cout<<it<<endl;
		 }*/
		 vector<pair<string,ll>>vec;
		 ll n;
		 cin>>n;
		 while(n--){
		  string str;
		  ll x;
		  cin>>s>>x;
		  vec.pb({s,x});
	     }
	     vector<ll>final;
	     for(i=0;i<ans.size();i++){
		   ll c=0;
			for(j=0;j<vec.size();j++){
		         ll z=countFreq(vec[j].first,ans[i]);
		         c+=z*vec[j].second;	     
		    }
		    final.pb(c);   
	    }
	    sort(final.rbegin(),final.rend());
	    cout<<final[0]<<endl;
    }
 }
 /*
  1
  8 100
  4 2 3 6 8 7 1 5
*/

//1
//neeraj jaiswal 
/*
  1
  5 100
  5 4 3 2 1
*/
int32_t main()
{
    fio;
    solve();
}
