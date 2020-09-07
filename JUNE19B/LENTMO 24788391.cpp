/* 

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
#define pob pop_back
#define r return 0
using namespace std;
int gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int findGCD(vector<ll>arr,ll n) 
{ 
    ll result = arr[0]; 
    for (ll i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 
bool comp(int a, int b) 
{ 
    return (a < b); 
} 
int main(){
        ll T;
        cin>>T;
        while(T--){
            ll n,sum=0,sum4=0,sum3=0;
            cin>>n;
            vector<ll>v,v1,v2;
            ll i,a;
            for(i=0;i<n;i++){
                cin>>a;
                v.pb(a);
            }
            for(i=0;i<n;i++){
                sum+=v[i];
            }
            sum4=sum;
            sum3=sum;
            ll k,x,c,d;
            cin>>k>>x;
           for(i=0;i<n;i++){
                c=v[i]^x;
                v1.pb(c);
            }
            for(i=0;i<n;i++){
                d=v1[i]-v[i];
                v2.pb(d);
            }
            sort(v2.rbegin(),v2.rend());
            if(k==n){
                for(i=0;i<v2.size();i++){
                    sum4+=v2[i];
                }
                if(sum4>sum){
                    cout<<sum4<<endl;
                    continue;
                }
                else{
                    cout<<sum<<endl;
                    continue;
                }
            }
            else if(k%2==1){
                	for(i=0;i<v2.size();i++){
				        if(v2[i]>0){
					        sum+=v2[i];
				        }
			        }
            }
        	else{
			    ll c=0;
		        for(i=0;i<v2.size();i++){
			        if(v2[i]>=0){
				        c++;
			        }
    		}
		    if(c%2==1){
			    ll sum5=sum,sum6=sum;
			    for(int i=0;i<c-1;i++){
				    sum5+=v2[i];
			    }
			    if(c+1<=n){
			        for(i=0;i<c+1;i++){
				        sum6+=v2[i];
			        }
			    }
		        sum=max({sum5,sum6,sum3});
		    }
		    else{
		        for(i=0;i<c;i++){
		            sum+=v2[i];
		        }
		    }
		  }	
		    cout<<sum<<endl;
        }
        r;
}
/*CONTRIBUTED BY KOULICK SADHU*/