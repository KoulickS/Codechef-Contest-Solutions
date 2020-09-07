#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
using namespace std;
int main(){
    fio
    ll t,j=1;
    cin>>t;
    while(t--){
        ll n,a[MAX_LIMIT],even=0,odd=0,i;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(odd%2==1  && n>1){
            cout<<"2"<<endl;
        }
        else{
            cout<<"1"<<endl;
        }
        odd=even=0;
    }
}