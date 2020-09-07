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
int fact(ll n); 
int nCr(ll n,ll r) 
{ 
	return fact(n) / (fact(r) * fact(n - r)); 
} 
int fact(ll n) { 
	ll res = 1,i; 
	for(i=2;i<=n;i++){ 
		res=res*i;
	}
	return res; 
} 
int main(){
    fio;
    ll T;
    cin>>T;
    while(T--){
        string str;
        cin>>str;
        ll i,c1=0,c2=0;
        for(i=0;str[i];i++){
            if(str[i]=='1'){
                c1++;
            }
            else{
                c2++;
            }
        }
        if(c1 & 1){
            cout<<"WIN"<<endl;
        }
        else{
            cout<<"LOSE"<<endl;
        }
    }
        return 0;
}