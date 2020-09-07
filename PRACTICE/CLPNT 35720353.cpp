#include <bits/stdc++.h>
    using namespace std;
    typedef long long int ll;
    int main() {
    	ll t;
    	cin>>t;
    	while(t--){
    	vector<ll>v;
    		ll n;
    		cin>>n;
    		ll a[n],k,l,s;
    		for( k=0;k<n;k++){
    			cin>>a[k];
    			v.push_back(a[k]);
    		}
    		l=*min_element(v.begin(),v.end());
    		ll q;
    		cin>>q;
    		while(q--){
    			ll x,y,m;
    			cin>>x>>y;
    			m=x+y;
    			if(binary_search(v.begin(),v.end(),(x+y))){
    				cout<<-1<<endl;
    			} 
    			else if((!binary_search(v.begin(),v.end(),(x+y)))&&(x+y)>l) {
    				vector<ll>::iterator it;
    				it=lower_bound(v.begin(),v.end(),m);
    				cout<<(it-v.begin())<<endl;
    			}
    			else if((x+y)<l){
    				cout<<0<<endl;
    			}
    			//    vector<ll>::iterator it1;
    		}   
    	}
    // your code goes here
    return 0;
    }