/*Author- Koulick Sadhu*/
#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100010
#define haha(x) x.begin(),x.end()
#define rs resize
#define remove_zero(str) str.erase(0, str.find_first_not_of('0'));
#define b begin
#define br break
const long long kot = LLONG_MAX;
#define pb emplace_back
#define pp pop_back
using kk = long double;
#define endl "\n"
#define f first
#define cc continue
#define s second
#define ee end
#define ii insert
#define ss size
#define up upper_bound
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

 void SieveOfEratosthenes(ll n, bool prime[])
{
    // Initialize all entries of boolean array
    // as true. A value in prime[i] will finally
    // be false if i is Not a prime, else true
    // bool prime[n+1];
    for (ll i=0; i<=n; i++)
        prime[i] = true;

    for (ll p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it
        // is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (ll i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}

// Function to generate mersenne primes less
// than or equal to n
vector<ll>vec;
void mersennePrimes(ll n)
{
    // Create a boolean array "prime[0..n]"
    bool prime[n+1];

    // Generating primes using Sieve
    SieveOfEratosthenes(n,prime);

    // Generate all numbers of the form 2^k - 1
    // and smaller than or equal to n.
    for (ll k=2; ((1<<k)-1) <= n; k++)
    {
        ll num = (1<<k) - 1;

        // Checking whether number is prime and is
        // one less then the power of 2
        if (prime[num])
            vec.pb(num);
    }
}


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
void divisors(ll n)
{
    vector<ll>v;
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                v.pb(i);

            else // Otherwise print both
            v.pb(i);
            v.pb(n/i);
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
void factors(ll n)
{
    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        //cout << 2 << " ";
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            vec.pb(i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        vec.pb(n);
}

int sumofdigits(ll n){
        ll sum=0;
        while(n>0){
            sum+=n;
            n/=10;
        }
        return sum;
}
ll kash(ll n){
   if(n>0) return n;
   else return -n;
}
bool powertwo(ll x){
  return x&& (!(x&(x-1)));
}
ll l[MAX_LIMIT],rr[MAX_LIMIT];
void solve(){
    ll T=1;
    cin>>T;
    while(T--){
        ll X,Y;
        cin>>X>>Y;
        ll N,M,K;
        cin>>N>>M>>K;
        ll arr[N][2];
        ll i;
        ll vec[M][2],brr[K][2];
        kk kash=DBL_MAX;
        kk g=DBL_MAX;
        kk x[N+1],v[N+1][M+1],z,p[M+1],u[M+1][N+1],h[M+1],d[N+1];
        for(i=0;i<N;i++)
        {
            cin>>arr[i][0]>>arr[i][1];
        }
        for(i=0;i<M;i++)
        {
            cin>>vec[i][0]>>vec[i][1];
        }
        for(i=0;i<K;i++)
        {
            cin>>brr[i][0]>>brr[i][1];
        }
        ll j;
        for(i=0;i<N;i++)
        {
            for(j=0;j<M;j++)
            {
                v[i][j]=sqrt((pow(arr[i][0]-vec[j][0],2))+(pow(arr[i][1]-vec[j][1],2)));
            }
        }
        for(i=0;i<N;i++)
        {
            x[i]=sqrt((pow(arr[i][0]-X,2))+(pow(arr[i][1]-Y,2)));
        }
        for(i=0;i<M;i++)
        {
            kash=DBL_MAX;
            for(j=0;j<K;j++)
            {
                z=sqrt((brr[j][0]-vec[i][0])*(brr[j][0]-vec[i][0])+(brr[j][1]-vec[i][1])*(brr[j][1]-vec[i][1]));
                if(z<kash)
                {
                    kash=z;
                }
            }
            p[i]=kash;
        }kash=DBL_MAX;
        for(i=0;i<N;i++)
        {
            for(j=0;j<M;j++)
            {
                if(p[j]+v[i][j]+x[i]<kash)
                {
                    kash=p[j]+v[i][j]+x[i];
                }
            }
        }
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                u[i][j]=sqrt((arr[j][0]-vec[i][0])*(arr[j][0]-vec[i][0])+(arr[j][1]-vec[i][1])*(arr[j][1]-vec[i][1]));
            }
        }
        for(i=0;i<M;i++)
        {
            h[i]=sqrt((vec[i][0]-X)*(vec[i][0]-X)+(vec[i][1]-Y)*(vec[i][1]-Y));
        }
        for(i=0;i<N;i++)
        {
            g=DBL_MAX;
            for(j=0;j<K;j++)
            {
                z=sqrt((brr[j][0]-arr[i][0])*(brr[j][0]-arr[i][0])+(brr[j][1]-arr[i][1])*(brr[j][1]-arr[i][1]));
                if(z<g)
                {
                    g=z;
                }
            }
            d[i]=g;
        }
        for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                if(u[i][j]+h[i]+d[j]<kash)
                {
                    kash=u[i][j]+h[i]+d[j];
                }
            }
        }
        cout<<fixed<<setprecision(10)<<kash<<endl;
    }
}
int main()
{
    fio;
    solve();
}
