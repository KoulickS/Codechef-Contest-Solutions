/* Never use Ideone for compiling

        Author: Koulick Sadhu
        Institution: Jalpaiguri Government Engineering College
*/
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
    fio
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n;
        x=ceil(float((n*(0.75))));
        string str;
        cin>>str;
        ll i,len,c=0,d=0,c1=0,c2=0;
        len=str.length();
        for(i=0;str[i];i++){
            if(str[i]=='P'){
                c++;
            }
        }
        if(c>=x){
            d=0;
        }
        else{
            d=x-c;
        }
        for(i=2;i<len-2;i++){
            if((str[i]=='A') && (str[i-2]=='P' || str[i-1]=='P') && (str[i+1]=='P' || str[i+2]=='P') && (d!=0)){
                c1++;
                d--;
            }
            if(d==0){
                break;
            }
        }
        if(d!=0){
            cout<<"-1"<<endl;
        }
        else{
            cout<<c1<<endl;
        }
     }
     r;
}
