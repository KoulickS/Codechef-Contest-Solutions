/*                  Author- Koulick Sadhu       */

#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define pb push_back
#define mod 1000000007
#define bb back
#define CHARS_TOTAL 256
#define e endl
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std;
vector<vector<ll>>v(MAX_LIMIT);
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

ll power(ll x, unsigned ll y)  //Power in O(logn)
{
    ll temp;
    if(y == 0)
        return 1;
    temp = power(x, y / 2);
    if (y % 2 == 0)
        return temp * temp;
    else
    {
        if(y > 0)
            return x * temp * temp;
        else
            return (temp * temp) / x;
    }
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
bool isPrime(ll n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (ll i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

void factors(ll n)
{
    // Print the number of 2s that divide n
    vector<ll>v;
    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note i = i +2)
    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            v.pb(i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        v.pb(n);
}
bool powertwo(ll x){
  return x&& (!(x&(x-1)));
}

void ans1(){
    ll i,j;
    for(i=1;i<MAX_LIMIT;i++){
        for(j=i;j<MAX_LIMIT;j=j+i){
            v[j].pb(i);
        }
    }
}
vector<ll>ans(ll N){
        ll k;
        vector<ll>arra;
        for(k=1;k<sqrt(N)+1;k++)
        {
            if(!(N%k)){
                if(N/k==k){
                    arra.pb(k);
                }
                else{
                    arra.pb(N/k);
                    arra.pb(k);
                }
            }
        }
        return arra;
}
void solve(){
            ans1();
            ll t;
            cin>>t;
            while(t--){
                ll n;
                cin>>n;
                ll v1[n];
                ll *arr ; arr=(ll*)calloc((ll)pow(10,6),sizeof(ll)) ;
                ll j,c=0,i;
                for(j=0;j<n;j++)
                {
                    cin>>v1[j];
                    if(j){
                        c=max(c,arr[v1[j]] );
                    }
                    vector<ll>arr3;
                    if(v1[j]<MAX_LIMIT){
                        arr3=v[v1[j]];
                    }
                    else{
                        arr3=ans(v1[j]);
                    }
                    for(i=0;i<arr3.size();i++){
                        arr[arr3[i]]=arr[arr3[i]]+1;
                    }
                }
                cout<<c<<endl;
            }
}
int main()
{
    fio;
    solve();
}




























