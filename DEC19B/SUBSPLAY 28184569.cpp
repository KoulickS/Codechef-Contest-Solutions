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
#define mo 998244353
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
void solve(){
    ll T=1;
    cin>>T;
    while(T--){
        vector<ul>freq(26),a(26),b(26);
        ll n;
        cin>>n;
        string str;
        cin>>str;
        ul i,m(n);
        for(i=0;i<n;i++){
            const unsigned char x(str[i] - 'a');
            switch(freq[x]){
            case 0: a[x]=i;br;
            case 1: b[x]=i; m=min(b[x]-a[x],m); br;
            default: a[x]=b[x]; b[x]=i; m=min(b[x]-a[x],m); br;
            }
            freq[x]++;
        }
        cout<<n-m<<endl;
    }
}
int main()
{
    fio;
    solve();
}
