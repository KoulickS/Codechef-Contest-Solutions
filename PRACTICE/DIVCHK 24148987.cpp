#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
        ll T;
        cin>>T;
        while(T--){
            ll a,b,x;
            cin>>a>>b;
            if(b==0)
		    cout<<"crash"<<endl;
		    else{
            if(a%b==0){
                cout<<"safe"<<endl;
            }
            else{
                cout<<"crash"<<endl;
            }
		    }
        }
        
}