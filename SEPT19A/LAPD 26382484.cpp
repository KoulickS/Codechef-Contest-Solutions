#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define pb push_back
#define bb back
#define mod 1000000007
#define CHARS_TOTAL 256
#define e endl
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std;

class gfg
{
 public : ll gcd(ll a, ll b){
    if (a == 0)
        return b;
    return gcd(b % a, a);
 }


// Function to return LCM of two numbers
 ll lcm(ll a, ll b)
 {
    return (a*b)/gcd(a, b);
 }
} ;
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
void divisors(int n)
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
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

/*void factors(ll n)
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
    return v[0];
}
*/
ll floorSqrt(ll x)// Taken from geeksforgeeks.org/square-root-of-an-integer/  
{     
    // Base cases 
    if (x == 0 || x == 1)  
       return x; 
  
    // Do Binary Search for floor(sqrt(x)) 
    ll start = 1, end = x, ans;    
    while (start <= end)  
    {         
        ll mid = (start + end) / 2; 
  
        // If x is a perfect square 
        if (mid*mid == x) 
            return mid; 
  
        // Since we need floor, we update answer when mid*mid is  
        // smaller than x, and move closer to sqrt(x) 
        if (mid*mid < x)  
        { 
            start = mid + 1; 
            ans = mid; 
        }  
        else // If mid*mid is greater than x 
            end = mid-1;         
    } 
    return ans; 
} 

void solve(){
    ll T;
    cin>>T;
    while(T--){
        ll i,j,k,a,b,c,answer=0;
        cin>>a>>b>>c;
        for(i=1;i<a+1;i++){
            for(k=1;k<c+1;k++){
                j=sqrt(((i%mod-1)*(k%mod-1))%mod);
                while((((j%mod)*(j%mod))%mod)>=(((i%mod-1)*(k%mod-1))%mod) && j>=1){
                    j=j-1;
                }
                if(b<j){
                    j=b;
                }
                if(b>=j && (((j%mod)*(j%mod))%mod)<(((i%mod-1)*(k%mod-1))%mod) && j>=1){
                    answer=((answer%mod)+(j%mod))%mod;
                }
            }
        }
            cout<<answer%mod<<e;
	}
}
int main(){
    fio;
    solve();
}
