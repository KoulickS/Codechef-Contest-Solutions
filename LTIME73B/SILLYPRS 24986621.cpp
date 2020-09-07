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
    ll t;
    cin>>t;
    while(t--){
        ll n,s=0,x=0,y=0,z=0,a=0,p=0;
        cin>>n;
        ll arr[MAX_LIMIT],arr1[MAX_LIMIT];
        ll i;
        for(i=0;i<n;i++){
            cin>>arr[i];
            s=s+arr[i];
            if(arr[i]%2==0){
                x++;
            }
        }
        for(i=0;i<n;i++){
            cin>>arr1[i];
            s=s+arr1[i];
            if(arr1[i]%2==0){
                y++;
            }
        }
        a=n-x;
        p=n-y;
        if(x>=y){
	        z=y;
	    }
	    else
	    {
	        z=x;
	    }
	    if(a>=p){
	        z+=p;
	    }
	    else{
	        z+=a;
	    }
	    s=(s+z-n)/2;
	    cout<<s<<endl;
    }
}