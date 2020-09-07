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
#define pb emplace_back
#define pp pop_back
using kk = long double;
#define endl "\n"
#define rese(x,y) memset(x,y,sizeof(x))
#define f first
#define ul unsigned long
#define cc continue
#define ee end
#define ii insert
#define mo 1000000007
#define ss size
#define up upper_bound
#define pc pop_back()
#define mp make_pair
#define mod 1000000007
#define r reverse
#define bb back
#define CHARS_TOTAL 256
#define INT_BITS 32
const ll alpha=1e18;
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std;
int gcd(ll a, ll b)
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
int largest(ll arr[], ll n)
{
    return *max_element(arr, arr+n);
}
// Function to return LCM of two numbers
 ll lcm(ll a, ll b)
 {
    return (a*b)/gcd(a, b);
 }

void sieve(bool primes[], int x)
{
    primes[1] = false;
    for (int i=2; i*i <= x; i++)
    {
        if (primes[i] == true)
        {
            for (int j=2; j*i <= x; j++)
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
 public: int sumDigits(int no)
 {
   return no == 0 ? 0 : no + sumDigits(no/10) ;
 }
};


bool isPerfectSquare(long double x)
{
  // Find floating point value of
  // square root of x.
  long double sr = sqrt(x);

  // If square root is an integer
  return ((sr - floor(sr)) == 0);
}


bool comp(int a, int b)
{
    return (a < b);
}
vector<ll>ve;
void divisors(ll n)
{
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
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

int gcdofarray(ll v[], ll n)
{
    ll result = v[0];
    for (ll i = 1; i < n; i++)
        result = gcd(v[i], result);
    return result;
}

int sumofdigits(ll n){
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
   for (int i=str.length()-1; i>=0; i--)
      cout << str[i];
}
ll kash(ll x){
    ll c=0;
    while(x%3==0){
        c++;
        x=x/3;
    }
    return c;
}
ll fact(ll n);
ll nCr(ll n, ll r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
ll fact(ll n)
{
    ll res = 1;
    for (ll i = 2; i <= n; i++)
        res = res * i;
    return res;
}
ll findGCD(ll x, ll y) {

    	return gcd(x, y);
    }
void findSubSequences(ll sequences[], ll n) {

    	ll resultdp[n][101], i, j, jj;

    	for(i = 0; i < n; i++)
    		for(j = 0; j <= 101; j++)
    			resultdp[i][j] = 0;

    	resultdp[0][sequences[0]]=1;
    	ll res=resultdp[0][1];

    	for(i=1;i<n;i++){

    		for(j=i-1;j>=0;j--) {

    			if(sequences[i]>sequences[j]) {

    				for(jj=1;jj<=100;jj++) {

    					ll temp = findGCD(sequences[i],jj);
    					resultdp[i][temp] += resultdp[j][jj];
    					resultdp[i][temp] = resultdp[i][temp] % 1000000007;
    				}
    			}
    		}
    		resultdp[i][sequences[i]]++;
    		res = res + resultdp[i][1];
    		res = res % 1000000007;
    	}
        cout<<res<<endl;
}
void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    ll i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    findSubSequences(arr,n);
}
int main()
{
    fio;
    solve();
}