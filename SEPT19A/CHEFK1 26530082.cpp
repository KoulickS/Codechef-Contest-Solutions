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
        ll n,m;
        cin>>n>>m;
        if ((n-1)>m || m>((n*(n+1))/2))
            cout<<-1<<endl;
        else if(n==1 && m==0)
            cout<<0<<endl;
        else if(n==1 && m==1)
            cout<<1<<endl;
        else if(n==2 && m==1)
            cout<<1<<endl;
        else if(m<=n+1 && n-1<=m)
            cout<<2<<endl;
        else if(m<=(2*n) && m>n+1)
            cout<<3<<endl;
        else if(m<=(n*(n+1))/2){
          //  cout<<1<<endl;
            if(!(n&1)){
                cout<<ceil((m-2*n)/(n/2.0))+3<<endl;
            }
            else{
                cout<<ceil((m-2*n)/(n/2+0.5))+3<<endl;
            }   
        }
        else {  
            cout<<-1<<endl;
        }
     }
}
int main()
{
    fio
    solve();
}
