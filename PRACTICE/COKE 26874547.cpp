#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
#define bb back
#define f first
#define e endl
#define s second
using namespace std;
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n,m,k,l,r;
        ll i;
        ll g=INT_MAX;
        cin>>n>>m>>k>>l>>r;
        vector<pair<ll,ll>>vec;
        for(i=0;i<n;i++){
            ll c,p;
            cin>>c>>p;
            vec.pb(make_pair(c,p));
        }
        for(i=0;i<n;i++){
            if(vec[i].f<k){
                vec[i].f=min(vec[i].f+m,k);
            }
            if(vec[i].f>k){
                vec[i].first = max(vec[i].f-m, k);
            }
        }
        for(i=0;i<n;i++){
            if(vec[i].f>=l  &&  vec[i].f<=r){
                g= min(g,vec[i].s);
            }
        }
        if(g==INT_MAX){
            cout<<"-1"<<endl;
        }
        else{
            cout<<g<<endl;
        }
    }
    return 0;
}