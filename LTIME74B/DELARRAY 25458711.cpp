#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
#define r return 0
#define cc continue
#define bb back
#define e endl
#define b break
using namespace std;
int main(){
    fio;
    ll T;
    cin>>T;
    while(T--){
    	ll N;
    	ll i,a=0,j,kash,nil;
    	cin>>N;
    	ll tt;
    	vector<ll>v1,arr;
    	for(i=0;i<N;i++){
    		cin>>tt;
    		v1.pb(tt);
    	}
    	
    	arr.pb(v1[N-1]);
    	kash=N;
    	for(i=N-1;i>0;i--){
    		if(v1[i] > v1[i-1]){
    			arr.pb(v1[i-1]);
    		}
    		else{
    			kash = i;
    			b;
    		}
    	}
    	if(kash==N){
    	    nil= ( N * (N + 1) ) /2 -1;
    		cout<<nil<<e;
    	}
    	else{
    		a=arr.size();
    		a=a+1;
	    	for(i=0;i<kash;i++){
	    		if(i==0){
	    			for(j=0;j<arr.size();j++){
	    				if(v1[i]<arr[j]){
	    					a=a+1;
	    				}
	    				else{
	    					b;
	    		    	}
	    		  }
	    		}
	    		else{
	    			if(v1[i] > v1[i-1]){
		    			a=a+1;
		    			for(j=0;j<arr.size();j++){
		    				if(v1[i] < arr[j]){
		    					a=a+1;
		    				}
		    				else{
		    					b;
		    				}
		    			}
		    		}
		    		else{
		    			b;
		    		}
	    		}
	    	}
	    	cout<<a<<e;
	    }
    }
}