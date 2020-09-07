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
        ll n,i,a=0,b=0;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;s[i];i++){
            if(s[i]=='I'){
                a++;
            }
            else if(s[i]=='N'){
                b++;
            }
        }  
        if(a>0){
            cout<<"INDIAN"<<endl;
        }
        else if(b==n){
            cout<<"NOT SURE"<<endl;
        }
        else{
            cout<<"NOT INDIAN"<<endl;
        }
    }
}