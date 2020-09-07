#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
using namespace std;
int main(){
    fio
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],i,j,x;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[0]+a[1]<<endl;
        }
}