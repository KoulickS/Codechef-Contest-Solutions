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
#define pf pop_front
using kk = long double;
#define endl "\n"
#define rese(x,y) memset(x,y,sizeof(x))
#define f first
#define ul unsigned long
#define cc continue
#define ee end
#define ii insert
#define fr front
#define mo 1000000007
#define ss size
#define b begin
#define up upper_bound
#define pc pop_back()
#define mp make_pair
#define mo 1000000007
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
   for (ll i=str.length()-1; i>=0; i--)
      cout << str[i];
}

ll subCount(ll arr[], ll n, ll k)
{
    ll mod[k];
    memset(mod, 0, sizeof(mod));
    ll cumSum = 0;
    for (ll i = 0; i < n; i++) {
        cumSum *= arr[i];

        mod[((cumSum % k) + k) % k]++;
    }

    ll result = 0;
    for (ll i = 0; i < k; i++)
        if (mod[i] > 1)
            result += (mod[i] * (mod[i] - 1)) / 2;

    result += mod[0];

    return result;
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
string printRLE(string str)
{
    ll n = str.length();
    string s="";
    for (ll i = 0; i < n; i++) {

        // Count occurrences of current character
        ll count = 1;
        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
        string k=to_string(count);
        // Print character and its count
       s+=str[i]+k;
    }
    return s;
}
void solve(){
    ll t=1;
    cin>>t;
    while(t--){
       string str;
       cin>>str;
       ll i,flag=0;
       for(i=0;str[i];i++){
          if(str[i]=='0'){
            flag=1;
            br;
          }
       }
       ll c=0;
       if(flag==1){
        cout<<"false"<<endl;
       }
       else{
          ll j=0,k=str.length()-1;
          while(j<k){
             if((str[j]=='1' && str[k]=='1') || (str[k]=='1' && str[j]=='1') || (str[j]=='2' && str[k]=='7') || (str[j]=='7' && str[k]=='2') || (str[j]=='3' && str[k]=='8') ||(str[j]=='8' && str[k]=='3') || (str[j]=='4' && str[k]=='5') || (str[j]=='5' && str[k]=='4') ||(str[j]=='6' && str[k]=='9') || (str[j]=='9' && str[k]=='6')){
                 //cout<<"kash"<<" "<<endl;
                 c++;
                 //cout<<c<<endl;
             }
             j++;
             k--;
          }
        // cout<<c<<endl;
       if(str.length()%2==1){
          if(c==str.length()/2){
            cout<<"true"<<endl;
          }
          else{
            cout<<"false"<<endl;
          }
       }
       else{
        if(c==str.length()/2){
            cout<<"true"<<endl;
        }
        else{
            cout<<"false"<<endl;
        }
       }
     }
    }
}
int main()
{
    fio;
    solve();
}
