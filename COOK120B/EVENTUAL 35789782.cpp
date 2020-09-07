#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	 ll tt; cin>>tt;
	 for(ll j=0;j<tt;j++){
		 ll len;cin>>len;
		 string s;
		 cin>>s;
		 map<ll,ll>m;
		 ll c=0;
		 for(ll i=0;i<len;i++)m[s[i]]++;
		 for(auto itr:m){
			 if(itr.second%2==0)c++;
		 }
		 if(c==m.size()){
			 cout<<"YES"<<endl;
		 }
		 else{
			 cout<<"NO"<<endl;
		 }
  	}
}
