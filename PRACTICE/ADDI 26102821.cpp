#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
#define bb back
#define CHARS_TOTAL 256
#define e endl
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std;
int countunsetbits(ll n) { 
	ll count = 0; 
	
	// x holds one set digit at a time 
	// starting from LSB to MSB of n. 
	for (ll x = 1; x <= n; x = x<<1) 
		if ((x & n) == 0) 
			count++;	 

	return count; 
} 

// Driver code 
int main() 
{ 
    ll T;
    cin>>T;
    while(T--){
	ll n = 17; 
	cin>>n;
	cout <<countunsetbits(n)<<endl; 
    }
	return 0; 
} 
