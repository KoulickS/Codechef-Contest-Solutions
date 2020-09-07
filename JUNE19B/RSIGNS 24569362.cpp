/* Never use Ideone for compiling, you can get caught

        Author: Koulick Sadhu
        Institution: Jalpaiguri Government Engineering College
*/
#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
#define r return 0
#define m 1000000007
using namespace std;

int power(ll x, unsigned ll y, ll p) // Taken from https://www.geeksforgeeks.org/modular-exponentiation-power-in-modular-arithmetic/
{ 
    ll res = 1;      // Initialize result 
  
    x=x % p;  
    while (y>0){ 
        if (y&1){ 
            res = (res*x) % p;
        } 
        y = y>>1;
        x = (x*x) % p;   
    } 
    return res; 
} 

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll k,x,y,z;
        cin>>k;
        y=power(2,k-1,m);
        z=((y%m)*10)%m;
        cout<<z<<endl;
    }
    r;
}
/*Contributed by Koulick Sadhu*/