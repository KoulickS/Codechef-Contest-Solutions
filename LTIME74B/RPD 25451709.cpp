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
using namespace std;
int func(ll n)
{
     long long int xx , answer =0;
     while(n>0)
     {
         xx=n;
         answer=xx+answer;
         n=n/10;
     }
     return answer;
 }
int main()
{
    ll T;
	cin>>T;
	while(T--){
	    ll i,n,ff=0,nexx;
	    ll j,xx;
	    cin>>n;
	    ll v[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>v[i];
	    }
	    for(i=0;i<n-1;i++)
	    {
	        
	        
	        for(j=i+1;j<n;j++)
	        
	        {
	            xx=v[i]*v[j];
	            nexx=func(xx);
	            ff=max(ff,nexx);
	        }
	    }
	    cout<<ff<<endl;
	}

	r;
}
