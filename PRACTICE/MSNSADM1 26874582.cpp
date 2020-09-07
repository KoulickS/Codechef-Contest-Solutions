#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
#define cc continue
#define bb back
#define e endl
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(0),v1(0);
        ll arr[MAX_LIMIT]={0};
        ll a,i;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        for(i=0;i<n;i++){
            cin>>a;
            v1.pb(a);
        }
        for(i=0;i<n;i++){
            arr[i]=v[i]*20-v1[i]*10;
        }
        ll x=sizeof(arr)/sizeof(arr[0]);
        sort(arr,arr+x);
        if(arr[x-1]<0){
            cout<<0<<endl;
        }
        else{
            cout<<arr[x-1]<<endl;
        }
    }
    return 0;
}