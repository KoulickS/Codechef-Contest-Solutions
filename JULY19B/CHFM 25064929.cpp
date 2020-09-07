#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
#define r return 0
using namespace std;
int main(){
    fio;
    ll T;
    cin>>T;
    while(T--){
        ll n,i;
        cin>>n;
        map<ll,vector<ll>>v;
        ll a,s=0;;
        for(i=0;i<n;i++){
            cin>>a;
            v[a].pb(i+1);
            s=s+a;
        }
        ll y;
        y=s/n;
        if(y*n==s){
            if(v.find(y)!=v.end()){
                cout<<v[y][0]<<endl;
            }
            else{
                cout<<"Impossible"<<endl;
            }
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
     r;
}

    