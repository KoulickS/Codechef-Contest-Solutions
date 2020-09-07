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
    ll t;
    cin>>t;
    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll z=x+y;
        z=int(z/k);
        if(z%2==0){
            cout<<"Chef"<<endl;
        }
        else{
            cout<<"Paja"<<endl;
        }
    }
}