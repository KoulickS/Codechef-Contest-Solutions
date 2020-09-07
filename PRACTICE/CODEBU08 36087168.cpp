#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
	    string str;
	    cin>>str;
	    ll a,b;
	    cin>>a>>b;
	    ll pos=-1,pos1=-1;
	    ll i;
	    for(i=0;str[i];i++){
			if(str[i]=='A'){
				pos=i;
			}
			if(str[i]=='B'){
				pos1=i;
			}
	
		}
		ll dis=abs(pos-pos1);
		if(dis%(a+b)==0){
			cout<<"unsafe"<<endl;
		}
		else{
			cout<<"safe"<<endl;
		}
	}
}
