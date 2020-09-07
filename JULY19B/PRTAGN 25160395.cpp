/*

                    Author      : Koulick Sadhu
                    Institution : Jalpaiguri Government Engineering College
*/
#include<bits/stdc++.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define r return 0
#define MAX_LIMIT 100000
#define bc __builtin_popcount
using namespace  std;
int main(){
            fio;
            ll T;
            cin>>T;
            while(T--){
                    ll q,ss,z,even=0,odd=0,j;
	                cin>>q;
		            vector<ll>vec;
	                ll arr[1000000]={0},x;
	                while(q--){
	            	            cin>>x;
		                        if(arr[x]==0){
			                        if(bc(x)%2==1){	
			                            odd++;
			                        }
			                        else{ 
			                            even++;
			                        }
		            	            vec.pb(x);
			                        arr[x]=1;
		            	            ss=vec.size()-1;
            			            for(j=0;j<ss;j++){
				                        z=vec[j]^x;
				                        if(arr[z]==0){
					                            arr[z]=1;
					                            vec.pb(z);
					                            if(bc(z)%2==1){	
					                                    odd++;
					                            }
					                            else{
					                                even++;  
					                            } 
				                        }
			                    }
		                    }
		               cout<<even<<" "<<odd<<endl;	
	            }
        }
}