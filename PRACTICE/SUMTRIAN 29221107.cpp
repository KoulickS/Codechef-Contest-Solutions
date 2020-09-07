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
void solve() {
    //input
    ll t=1;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       ll i,j;
       ll arr[1000][1000];
       for(i=0;i<n;i++){
         for(j=0;j<=i;j++){
            cin>>arr[i][j];
         }
       }
       for(i=n-2;i>=0;i--){
         for(j=0;j<=i;j++){
            arr[i][j]+=max(arr[i+1][j],arr[i+1][j+1]);
         }
       }
       cout<<arr[0][0]<<endl;
    }
}
int main()
{
    fio;
    solve();
}
