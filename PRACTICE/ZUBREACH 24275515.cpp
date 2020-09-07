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
        ll m,i,n,x=0,y=0;
        cin>>m>>n;
        ll rx,ry;
        cin>>rx>>ry;
        ll length;
        cin>>length;
        string str;
        cin>>str;
        for(i=0;str[i];i++){
            if(str[i]=='U'){
                y++;
            }
            if(str[i]=='D'){
                y--;
            }
            if(str[i]=='R'){
                x++;
            }
            if(str[i]=='L'){
                x--;
            }
        }
        if(x==rx && y==ry){
            cout<<"Case"<<" "<<j++<<":"<<" "<<"REACHED"<<endl;
        }
        else if(x<0 || x>m){
            cout<<"Case"<<" "<<j++<<":"<<" "<<"DANGER"<<endl;
        }
        else if(y<0 || y>n){
            cout<<"Case"<<" "<<j++<<":"<<" "<<"DANGER"<<endl;
        }
        else{
            cout<<"Case"<<" "<<j++<<":"<<" "<<"SOMEWHERE"<<endl;
        }
    }
}