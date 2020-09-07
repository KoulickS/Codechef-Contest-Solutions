/*

                    Author      : Koulick Sadhu
                    Institution : Jalpaiguri Government Engineering College
*/
#include<bits/stdc++.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define r return 0
#define MAX_LIMIT 100000
#define bc __builtin_popcount
#define c cout
#define ee endl
#define s sort
#define b begin
#define e end
#define I 1000000000
#define mm min
using namespace  std;
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n,z;
        cin>>n>>z;
        vector<ll>v;
        ll a,i;
        for(i=0;i<n;i++){
            cin>>a;
            v.pb(a);
        }
        sort(v.b(),v.end());
        ll sum1=0,sum2=0;
        ll arr[MAX_LIMIT];
        for(i=0;i<n;i++){
            arr[i]=v[i]*(n-i);
        }
        sort(arr,arr+n);
        cout<<arr[0]<<endl;
    }
}