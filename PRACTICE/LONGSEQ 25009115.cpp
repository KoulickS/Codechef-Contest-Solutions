#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        ll i,c1=0,c2=0,len;
        len=str.length();
        for(i=0;str[i];i++){
            if(str[i]=='1'){
                c1++;
            }
            else{
                c2++;
            }
        }
        if(c1==1 || c2==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}