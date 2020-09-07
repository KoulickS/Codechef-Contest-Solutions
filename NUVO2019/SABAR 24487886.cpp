#include<bits/stdc++.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define pb push_back
#define mp make_pair
#define r return 0
using namespace std;
int main()
{
    fio;
    ll T;
    cin>>T;
    while(T--){
        ll a,b,c,d;
        cin>>a>>b;
        c=a+b-1;
        d=max(a,b)-min(a,b)+1;
        cout<<c<<" "<<d<<endl;
    }
}