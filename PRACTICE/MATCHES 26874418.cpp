#include<bits/stdc++.h>
#include<string.h>
#define ll long long
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define pb push_back
#define bb back
#define cc continue
#define mod 1000000007
#define CHARS_TOTAL 256
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std;


void solve(){
    ll T;
    cin>>T;
    while(T--){
        ll a,b,c=0;;
        cin>>a>>b;
        ll arr[]={6,2,5,5,4,5,6,3,7,6};
        ll sum=a+b;
        while(sum){
            c=c+arr[sum];
            sum=sum/10;
        }
        cout<<c<<endl;
    }
}
int main()
{
    fio
    solve();
}
