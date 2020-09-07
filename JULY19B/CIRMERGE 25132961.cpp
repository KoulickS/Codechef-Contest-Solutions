#include<bits/stdc++.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define ve vector
#define us unordered_set
#define f find
#define e erase
#define ii insert
#define b begin
#define s size
#define c cout
#define ee endl
#define r return 0
using namespace  std;
int main(){
	ll T;
	cin>>T;
	while(T--){
	ll n,i,w=0;
	cin>>n;
	ll x,m,a;
	ve<ll>vec;
	for(i=0;i<n;i++){
			cin>>x;
			vec.pb(x);
	}
	while(vec.s()!=1){
		m=1e9;
		for(i=0;i<vec.s();i++){
			if(vec[i]+vec[i+1]<m && i!=vec.size()-1){
				m=vec[i]+vec[i+1];
				a=i;
			}
			if(i==vec.s()-1&&vec[vec.s()-1]+vec[0]<m){
				m=vec[0]+vec[vec.s()-1];
				a=vec.size()-1;
			}
		}
		vec[a]=m;
		w+=m;
		vec.e(vec.b()+(a+1)%vec.s());
	}
	cout<<w<<endl;
  }
 r;
}