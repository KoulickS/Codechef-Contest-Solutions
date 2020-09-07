#include <stdio.h>
#include <iostream>
#include <stack>
#include <limits.h>
#include <string.h>
#include <vector>
#include <math.h>
#include <queue>
#include <list>
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
#define f first
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
#define mod 998244353
#define b begin
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
const ll alpha=1e18;
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std; 
ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
}
ll powe(ll x, unsigned ll y, ll p) 
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
ll modInverse(ll a, ll m) 
{ 
    ll g = gcd(a, m); 
    return powe(a, m-2, m); 
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
ll inverse(ll x,ll p){
   ll res=power(x,mod-2,mod);
   return res;	
}  
ll nCrModPFermat(ll n, ll r, ll p) 
{ 
   if (r==0) 
      return 1; 
  
    // Fill factorial array so that we 
    ll fac[n+1]; 
    fac[0] = 1; 
    for (ll i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%p; 
  
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
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
}
string intToBinaryString(ll n)
{

      char bArray[ (sizeof(ll) * 8) + 1 ];

      //index = 32 to fetch each 32 slots
      unsigned index  = sizeof(ll) * 8;

      char temp =0;
      bArray[ index ] = '\0';

      do{         
            temp = (n & 1); 
            temp = temp + '0';
            bArray[ --index ] = temp;

      }while (n >>= 1);
      return string( bArray + index );
}
/*void leftrotate(string &s, ll d) 
{ 
    reverse(s.begin(), s.begin()+d); 
    reverse(s.begin()+d, s.end()); 
    reverse(s.begin(), s.end()); 
} *?
  
// In-place rotates s towards right by d 
string rightrotate(string &s, ll d) 
{ 
   leftrotate(s, s.length()-d); 
   return s;
} 
void addZeros(string& str, ll n) 
{ 
    for (ll i = 0; i < n; i++) { 
        str = "0" + str; 
    } 
} 
// Taken from https://www.geeksforgeeks.org/print-all-prime-factors-of-a-given-number/
ll solve1(ll n){
	ll c=0;  
    while (n % 2 == 0)  
    {  
        //cout << 2 << " ";
        c++;
        n = n/2;  
    }  
    for(ll i = 3; i <= sqrt(n); i = i + 2)  
    {    
        while (n % i == 0)  
        {  
            //cout << i << " ";  
            c++;
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)
		c++;
        //cout << n << " "; 
     
    return c; 
} 
void add_edge(vector<ll> adj[], ll src, ll dest) 
{ 
    adj[src].push_back(dest); 
    adj[dest].push_back(src); 
} 
bool BFS(vector<ll>adj[],ll src, ll dest, ll v,ll pred[], ll dist[]) 
{ 
    // a queue to maintain queue of vertices whose 
    // adjacency list is to be scanned as per normal 
    // DFS algorithm 
    list<ll> queue; 
  
    // boolean array visited[] which stores the 
    // information whether ith vertex is reached 
    // at least once in the Breadth first search 
    bool visited[v]; 
  
    // initially all vertices are unvisited 
    // so v[i] for all i is false 
    // and as no path is yet constructed 
    // dist[i] for all i set to infinity 
    for (ll i = 0; i < v; i++) { 
        visited[i] = false; 
        dist[i] = INT_MAX; 
        pred[i] = -1; 
    } 
  
    // now source is first to be visited and 
    // distance from source to itself should be 0 
    visited[src] = true; 
    dist[src] = 0; 
    queue.push_back(src); 
  
    // standard BFS algorithm 
    while (!queue.empty()) { 
        int u = queue.front(); 
        queue.pop_front(); 
        for (ll i = 0; i < adj[u].size(); i++) { 
            if (visited[adj[u][i]] == false) { 
                visited[adj[u][i]] = true; 
                dist[adj[u][i]] = dist[u] + 1; 
                pred[adj[u][i]] = u; 
                queue.push_back(adj[u][i]); 
  
                // We stop BFS when we find 
                // destination. 
                if (adj[u][i] == dest) 
                   return true; 
            } 
        } 
    } 
  
    return false; 
} 
  
// utility function to print the shortest distance  
// between source vertex and destination vertex 
vector<ll>ve1;
void printShortestDistance(vector<ll>adj[],ll s,ll dest,ll v) 
{ 
    ll pred[v], dist[v]; 
  
    if (BFS(adj, s, dest, v, pred, dist) == false) 
    { 
        //cout << "Given source and destination"
          //   << " are not connected"; 
        return; 
    } 
  
    // vector path stores the shortest path 
    vector<ll> path; 
    ll crawl = dest; 
    path.push_back(crawl); 
    while (pred[crawl] != -1) { 
        path.push_back(pred[crawl]); 
        crawl = pred[crawl]; 
    } 
  
    // distance from source is in distance array 
    //cout << "Shortest path length is : "
      //  << dist[dest]; 
  
    // printing path from source to destination 
   // cout << "\nPath is::\n"; 
    for (ll i = path.size() - 1; i >= 0; i--) 
        //cout << path[i] << " "; 
        ve1.pb(path[i]);
} 
void SOE(ll n, bool prime[], 
						bool primesquare[], ll a[]) 
{ 
	// Create a boolean array "prime[0..n]" and 
	// initialize all entries it as true. A value 
	// in prime[i] will finally be false if i is 
	// Not a prime, else true. 
	for (ll i = 2; i <= n; i++) 
		prime[i] = true; 

	// Create a boolean array "primesquare[0..n*n+1]" 
	// and initialize all entries it as false. A value 
	// in squareprime[i] will finally be true if i is 
	// square of prime, else false. 
	for (ll i = 0; i <= (n * n + 1); i++) 
		primesquare[i] = false; 

	// 1 is not a prime number 
	prime[1] = false; 

	for (ll p = 2; p * p <= n; p++) { 
		// If prime[p] is not changed, then 
		// it is a prime 
		if (prime[p] == true) { 
			// Update all multiples of p 
			for (ll i = p * 2; i <= n; i += p) 
				prime[i] = false; 
		} 
	} 

	ll j = 0; 
	for (ll p = 2; p <= n; p++) { 
		if (prime[p]) { 
			// Storing primes in an array 
			a[j] = p; 

			// Update value in primesquare[p*p], 
			// if p is prime. 
			primesquare[p * p] = true; 
			j++; 
		} 
	} 
} 

// Function to count divisors 
ll countDivisors(ll n) 
{ 
	// If number is 1, then it will have only 1 
	// as a factor. So, total factors will be 1. 
	if (n == 1) 
		return 1; 

	bool prime[n + 1], primesquare[n * n + 1]; 

	ll a[n]; // for storing primes upto n 

	// Calling SieveOfEratosthenes to store prime 
	// factors of n and to store square of prime 
	// factors of n 
	SOE(n, prime, primesquare, a); 

	// ans will contain total number of distinct 
	// divisors 
	ll ans = 1; 

	// Loop for counting factors of n 
	for (ll i = 0;; i++) { 
		// a[i] is not less than cube root n 
		if (a[i] * a[i] * a[i] > n) 
			break; 

		// Calculating power of a[i] in n. 
		ll cnt = 1; // cnt is power of prime a[i] in n. 
		while (n % a[i] == 0) // if a[i] is a factor of n 
		{ 
			n = n / a[i]; 
			cnt = cnt + 1; // incrementing power 
		} 

		// Calculating number of divisors 
		// If n = a^p * b^q then total divisors of n 
		// are (p+1)*(q+1) 
		ans = ans * cnt; 
	} 

	// if a[i] is greater than cube root of n 

	// First case 
	if (prime[n]) 
		ans = ans * 2; 

	// Second case 
	else if (primesquare[n]) 
		ans = ans * 3; 

	// Third casse 
	else if (n != 1) 
		ans = ans * 4; 

	return ans; // Total divisors 
}
//Create a structure and store the initial probability
// of # as 1,1,1,1
/*
 * The implementation is as follows-
 * Make a structure consisting of 4 probabilities marked as a,b,c,d as initially as 1 because we know that the probability for # is [1,1,1,1]
 * So, suppose we encounter a string as (# & #), we can split this as
 *       [1,1,1,1]&[1,1,1,1]
 *        Now, following the next procedures mentioned alongside the code, we can find the probabilities of the 0's, 1's,a's and A's 
 * 
 * */
struct calc{
	    ll a;
	    ll b;
	    ll c;
	    ll d;
     	calc(){
			 a=1;
			 b=1;
			 c=1;
			 d=1;
		}
}; 
vector<ll>oroperation(vector<ll>&v,vector<ll>&v1){
       ll z3=v[0]*v1[0];
       ll o3=v[0]*v1[1]+v[1]*v1[0]+v[1]*v1[1]+v[1]*v1[2]+v[2]*v1[1]+v[3]*v1[1]+v[1]*v1[3]+v[2]*v1[3]+v[3]*v1[2];
       ll a3=v[2]*v1[0]+v[0]*v1[2]+v[2]*v1[2];
       ll A3=v[3]*v1[0]+v[0]*v1[3]+v[3]*v1[3];
       vector<ll>vec;
       vec.pb(z3);vec.pb(o3);vec.pb(a3);vec.pb(A3);	
	   return vec;
}
// How to do this question->
//Make table of OR consisting of 16 elements.
// The probability of each a,b,c,d is found out from the previous #
/*        
 *        O/P
 *   0 0  0
 *   0 1  1
 *   1 0  1
 *   1 1  1
 *   a 0  0(for a=0)  1(for a=1) 
 *   0 a  0           1
 *   1 a  1           1
 *   a 1  1           1
 *   A 0  1(~a=1)     0(~a=0)
 *   0 A  1           0
 *   A 1  1           1
 *   1 A  1           1 
 *   a a  0           0
 *   A A  1           1
 *   a A  1           1
 *   A a  1           1
 * 
 * Now from the above table, calculate the probablities as follows-
 * For 0 probability-> find the number of outputs having 0.
 * From above we observe, only 0 0 have output 0. So probability of 0 is x.a*y.a(considering two arrays x and y and probabilities of 0's,1's,a's and A's marked as a,b,c,d)
 * 
 * Similarly for 1, we find many options like, 0 1, 1 0,1 1,0 a,a,0,A 0,o A,a A,A a.
 * So overall we get, probability of one is- ((x.a*y.b)+(x.b*y.a)+(x.b*y.b)+(x.b*y.c)+(x.c*y.b)+(x.d*y.b)+(x.b*y.d)+(x.c*y.d)+(x.d*y.c));
 * 
 * Similarly for a's probability, we get->  ((x.c*y.a)+(x.a*y.c)+(x.c*y.c))
 * For A's- ((x.d*y.a)+(x.a+y.d)+(x.d*y.d))
 * 
 * 
 * Similarly this would follow for other operations as well, i.e. for AND and XOR. Make such table consisting of 16 elements and just find the probabilities as mentioned above.
 */
calc oroper(calc x,calc y){
	calc z;
	z.c=((x.c*y.a)+(x.a*y.c)+(x.c*y.c))%mod;
	z.a=((x.a*y.a))%mod;
	z.b=((x.a*y.b)+(x.b*y.a)+(x.b*y.b)+(x.b*y.c)+(x.c*y.b)+(x.d*y.b)+(x.b*y.d)+(x.c*y.d)+(x.d*y.c))%mod;
	z.d=((x.d*y.a)+(x.a*y.d)+(x.d*y.d))%mod; return z;
}
vector<ll>xoroperation(vector<ll>&v,vector<ll>&v1){
      ll z3=v[0]*v1[0]+v[1]*v1[1]+v[2]*v1[2]+v[3]*v1[3];
      ll o3=v[0]*v1[1]+v[1]*v1[0]+v[2]*v1[3]+v[3]*v1[2];
      ll a3=v[2]*v1[0]+v[0]*v1[2]+v[1]*v1[3]+v[3]+v1[1];
      ll A3=v[3]*v1[0]+v[0]*v1[3]+v[1]*v1[2]+v[2]*v1[1];	
	  vector<ll>vec;
       vec.pb(z3);vec.pb(o3);vec.pb(a3);vec.pb(A3);	
	   return vec;
}
calc xoroper(calc x,calc y){
	calc z;
	z.c=((x.c*y.a)+(x.a*y.c)+(x.b*y.d)+(x.d*y.b))%mod;
	z.a=((x.a*y.a)+(x.b*y.b)+(x.c*y.c)+(x.d*y.d))%mod;
	z.b=((x.a*y.b)+(x.b*y.a)+(x.c*y.d)+(x.d*y.c))%mod;
	z.d=((x.d*y.a)+(x.a*y.d)+(x.b*y.c)+(x.c*y.b))%mod; return z;	
}
vector<ll>andoperation(vector<ll>&v,vector<ll>&v1){
    ll z3=v[0]*(v1[0]+v1[1]+v1[2]+v1[3])+v[2]*v1[3]+v[3]*v1[2]+v1[0]*(v[1]+v[2]+v[3]);
    ll o3=v[1]*v1[1];
    ll a3=v[1]*v1[2]+v[2]*v1[1]+v[2]*v1[2];
    ll A3=v[1]*v1[3]+v[3]*v1[1]+v[3]*v1[3];
    vector<ll>vec;
    vec.pb(z3);vec.pb(o3);vec.pb(a3);vec.pb(A3);	
	return vec;	
}
calc andoper(calc x,calc y){
   	calc z;
   	z.c=((x.b*y.c)+(x.c*y.b)+(x.c*y.c))%mod;
	z.a=((x.a*y.a)+(x.a*y.b)+(y.a*x.b)+(x.c*y.a)+(x.a*y.c)+(x.d*y.a)+(x.a*y.d)+(x.d*y.c)+(x.c*y.d))%mod;
	z.b=((x.b*y.b))%mod;
	z.d=((x.d*y.b)+(x.b*y.d)+(x.d*y.d))%mod; return z;	
}
vector<ll>applyop(vector<ll>&v,vector<ll>&v1,char op){
	vector<ll>vec;
    switch(op){
	    case '&': vec=andoperation(v,v1);	
		case '^': vec=xoroperation(v,v1);
		case '|': vec=oroperation(v,v1);
	}
	return vec;	
}
ll prec(char c) 
{ 
    if(c == '&') 
    return 3; 
    else if(c == '|' || c == '^') 
    return 2; 
    else
    return -1; 
} 
void solve(){
    //input
    ll tt=1;
    scanf("%lld",&tt);
    ll inv=powe(4,mod-2,mod);
    /*
     * Here we create a stack and push the elements of the string until we find a "#". After we get "#",
     * we create a stack of structure and push the # structure into the stack. Now, we are left only with 
     * structures consisting only of [1,1,1,1].
     * After we encounter an operator such as ^, & or |, we push the structure into the stack and calculate the values 
     * and again push it back to the stack
     * At last, only a single structure consisting of the evaluated value remains
     * We pop it out and store it in a vector and add all the probabilities. Because, thats
     * the total probability we get versus the individual probability.
     * Now using modular multiplicative inverse function, we find the inverse mod of this sum and
     * multiply it with the probabilities.
     * i.e suppose, the probabilities are 9,1,3,3. We add them=16. Find the multiplicative inverse of 16 mod 998244353 
     * Suppose the ans is x.
     * We multiply the individual probabilities with the ans and output with mod to avoid overflow
     * 9*x, 1*x, 3*x,3*x
     */
    for(ll d=0;d<tt;d++){
	   char sx[100005]; scanf("%s",sx);
	   stack<char>s;
	   stack<calc>s1;
	   ll i,pos=0;
	   //Converted the string from infix to postfix for ease of calculation
	   for(i=0;sx[i];i++){
		   if(sx[i]=='#')sx[pos++]='#';
		   else if(sx[i]=='(')s.pu('(');
		   else if(sx[i]==')'){
			   char c=s.to();
			   while(c!='('){ sx[pos++]=c; s.pp(); c=s.to();}s.pp();
			}
			else s.push(sx[i]);}sx[pos]='\0';pos=0;
		//cout<<str<<endl;
		for(i=0;sx[i];i++){
		     if(sx[i]=='#'){calc z;s1.pu(z);pos++;}
		     else{calc x=s1.top();s1.pp(); calc y=s1.to(); s1.pp();
				  if(sx[i]=='^') s1.pu(xoroper(x,y));
				  else if(sx[i]=='|')s1.pu(oroper(x,y));
				  else if(sx[i]=='&')s1.pu(andoper(x,y));
			}
		}
		calc z=s1.top();s1.pop();
		//cout<<z.a<<" "<<z.b<<" "<<z.c<<" "<<z.d<<endl;
		ll u=(z.a+z.b+z.c+z.d)%mod;
		ll h=modInverse(u,mod);
		printf("%lld %lld %lld %lld\n",(h%mod*(z.a)%mod)%mod,(h%mod*(z.b)%mod)%mod,(h%mod*(z.c)%mod)%mod,(h%mod*(z.d)%mod)%mod);
		//cout<<(h%mod*(z.a)%mod)%mod<<" "<<(h%mod*(z.b)%mod)%mod<<" "<<(h%mod*(z.c)%mod)%mod<<" "<<(h%mod*(z.d)%mod)%mod<<endl;
	}
}
int32_t main()
{
    fio;
    solve();
}
