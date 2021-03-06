/*https://www.geeksforgeeks.org/convex-hull-set-1-jarviss-algorithm-or-wrapping/*/
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
#define ss size
#define b begin
#define up upper_bound
#define pc pop_back()
//#define mp make_pair
//#define r reverse
#define bb back
#define maxu 1000000000
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
void Z_algorithm(string str, vector<ll>&Z)
{
    Z.assign((ll)str.size(),0);
    ll n = str.length();
    ll L, R, k;
    L = R = 0;
    for(ll i = 1; i < n; ++i)
    {
        if(i>R) {
            L=R = i;
            while (R<n && str[R-L] == str[R])
                R++;
            Z[i] = R-L;
            R--;
        }
        else
        {
            k = i-L;
            if (Z[k] < R-i+1)
                Z[i] = Z[k];
            else
            {
                L = i;
                while (R<n && str[R-L] == str[R])
                    R++;
                Z[i] = R-L;
                R--;
            }
        }
    }
}
ll lastdigit(ll n){
   return n;
}
ll firstdigit(ll n){
     ll dig=(ll)log10(n);
     n=(ll)(n/pow(10,dig));
     return n;
}
bool ispalindrome(string str){
   string s=str;
   reverse(s.begin(),s.end());
   if(s==str){
     return true;
   }
   return false;
}
/*Taken from https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/*/
ll kash(ll x, unsigned ll y, ll p) 
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
void CountPair(ll L, ll R) 
{ 
  
    // total count of numbers in range 
    ll x = (R - L + 1); 
  
    // Note that if 'x' is odd then 
    // there will be '1' element left 
    // which can't form a pair 
  
    // printing count of pairs 
    cout << x / 2 << "\n"; 
} 
ll phi(ll n) 
{ 
    ll result = n; // Initialize result as n 
  
    // Consider all prime factors of n and subtract their 
    // multiples from result 
    for (ll p = 2; p * p <= n; ++p) { 
          
        // Check if p is a prime factor. 
        if (n % p == 0) { 
              
            // If yes, then update n and result 
            while (n % p == 0) 
                n /= p; 
            result -= result / p; 
        } 
    } 
  
    // If n has a prime factor greater than sqrt(n) 
    // (There can be at-most one such prime factor) 
    if (n > 1) 
        result -= result / n; 
    return result; 
} 
ll n,k;
struct Point 
{ 
    int x, y; 
}; 
  
// To find orientation of ordered triplet (p, q, r). 
// The function returns following values 
// 0 --> p, q and r are colinear 
// 1 --> Clockwise 
// 2 --> Counterclockwise 
int orientation(Point p, Point q, Point r) 
{ 
    int val = (q.y - p.y) * (r.x - q.x) - 
              (q.x - p.x) * (r.y - q.y); 
  
    if (val == 0) return 0;  // colinear 
    return (val > 0)? 1: 2; // clock or counterclock wise 
} 
  
// Prints convex hull of a set of n points. 
void convexHull(Point points[], ll n) 
{ 
    // There must be at least 3 points 
    if (n < 3) return; 
  
    // Initialize Result 
    vector<Point> hull; 
  
    // Find the leftmost point 
    ll l = 0; 
    for (ll i = 1; i < n; i++) 
        if (points[i].x < points[l].x) 
            l = i; 
  
    // Start from leftmost point, keep moving counterclockwise 
    // until reach the start point again.  This loop runs O(h) 
    // times where h is number of points in result or output. 
    ll p = l, q; 
    do
    { 
        // Add current point to result 
        hull.push_back(points[p]); 
  
        // Search for a point 'q' such that orientation(p, x, 
        // q) is counterclockwise for all points 'x'. The idea 
        // is to keep track of last visited most counterclock- 
        // wise point in q. If any point 'i' is more counterclock- 
        // wise than q, then update q. 
        q = (p+1)%n; 
        for (int i = 0; i < n; i++) 
        { 
           // If i is more counterclockwise than current q, then 
           // update q 
           if (orientation(points[p], points[i], points[q]) == 2) 
               q = i; 
        } 
  
        // Now q is the most counterclockwise with respect to p 
        // Set p as q for next iteration, so that q is added to 
        // result 'hull' 
        p = q; 
  
    } while (p != l);  // While we don't come to first point 
  
    // Print Result 
    if(hull.size()<=k)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    // for (int i = 0; i < hull.size(); i++) 
    //     cout << "(" << hull[i].x << ", "
    //           << hull[i].y << ")\n"; 
} 


void solve() {
    //input
    ll t=1;
    cin>>t;
    while(t--){
        cin>>n>>k;
        Point points[1000];
        ll i;
        for(i=0;i<n;i++){
            cin>>points[i].x>>points[i].y;
        }
        convexHull(points,n);
    }
}
int main()
{
    fio;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    solve();
}