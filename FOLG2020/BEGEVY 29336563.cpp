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
ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
 
    // base case
    if (a == b)
        return a;
 
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
ll largest(ll arr[], ll n)
{
    return *max_element(arr, arr+n);
}
// Function to return LCM of two numbers
 ll lcm(ll a, ll b)
 {
    return (a*b)/gcd(a, b);
 }
 
void sieve(bool primes[], ll x)
{
    primes[1] = false;
    for (ll i=2; i*i <= x; i++)
    {
        if (primes[i] == true)
        {
            for (ll j=2; j*i <= x; j++)
                primes[i*j] = false;
        }
    }
}
 
 
// Function to generate mersenne primes less
// than or equal to n
 
 
ll power(ll x, unsigned ll y, ll p)
{
    ll res = 1;      // Initialize result
 
    x = x % p;  // Update x if it is more than or
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
class gfg
{
 public: ll sumDigits(ll no)
 {
   return no == 0 ? 0 : no + sumDigits(no/10) ;
 }
};
 
 
bool isPerfectSquare(long double x)
{
  // Find floating poll value of
  // square root of x.
  long double sr = sqrt(x);
 
  // If square root is an lleger
  return ((sr - floor(sr)) == 0);
}
 
 
bool comp(ll a, ll b)
{
    return (a < b);
}
vector<ll>ve;
void divisors(ll n)
{
    // Note that this loop runs till square root
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
ll finduncommonsubsequence(string str,string s){
    if(!str.compare(s)){
        return 0;
    }
    return max(str.length(),s.length());
}
void reversec(string str)
{
   for (ll i=str.length()-1; i>=0; i--)
      cout << str[i];
}
 
string removeDuplicatesFromString(string str)
{
 
    // keeps track of visited characters
    ll counter = 0;
 
    ll i = 0;
    ll size = str.size();
 
    // gets character value
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
ll nCrModp(ll n, ll r, ll p)
{
    ll C[r+1];
    memset(C, 0, sizeof(C));
 
    C[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = min(i, r); j > 0; j--)
            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}
ll power(ll x,ll y,ll p) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
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
string add(string str1, string str2) 
{ 
    // Before proceeding further, make sure length 
    // of str2 is larger. 
    if (str1.length() > str2.length()) 
        swap(str1, str2); 
  
    // Take an empty string for storing result 
    string str = ""; 
  
    // Calculate length of both string 
    ll n1 = str1.length(), n2 = str2.length(); 
    ll diff = n2 - n1; 
  
    // Initially take carry zero 
    ll carry = 0; 
  
    // Traverse from end of both strings 
    for (ll i=n1-1; i>=0; i--) 
    { 
        // Do school mathematics, compute sum of 
        // current digits and carry 
        ll sum = ((str1[i]-'0') + 
                   (str2[i+diff]-'0') + 
                   carry); 
        str.push_back(sum + '0'); 
        carry = sum/10; 
    } 
  
    // Add remaining digits of str2[] 
    for (ll i=n2-n1-1; i>=0; i--) 
    { 
        ll sum = ((str2[i]-'0')+carry); 
        str.push_back(sum + '0'); 
        carry = sum/10; 
    } 
  
    // Add remaining carry 
    if (carry) 
        str.push_back(carry+'0'); 
  
    // reverse resultant string 
    reverse(str.begin(), str.end()); 
  
    return str; 
} 
void solve(){
    //input
    ll t=1;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        ll i;
        ll h=0,e=0,l=0,w=0,o=0,r=0,d=0;
        for(i=0;str[i];i++){
            if(str[i]=='h')h++;
            else if(str[i]=='e')e++;
            else if(str[i]=='l')l++;
            else if(str[i]=='o')o++;
            else if(str[i]=='w')w++;
            else if(str[i]=='r')r++;
            else if(str[i]=='d')d++;
        }
//helloworld
        if(h>=1 &&e>=1 && l>=3 &&o>=2&&w>=1&&r>=1&&d>=1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
       

//  No -1 NO
int main()
{
    fio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    solve();
}