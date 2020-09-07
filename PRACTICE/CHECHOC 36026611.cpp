#include<bits/stdc++.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
 
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define SS stringstream
#define allof(x) (x).begin(),(x).end()
#define gsize(x) (x).size()
#define modb7 (ll)1000000007
 
 
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int testcases;
	cin>>testcases;
	while(testcases--){
		long int n,m,x,y,a,b;
		cin>>n>>m>>x>>y;
		if(n==1 and m==1){
			cout<<x<<endl;
		}
		else{
			if(x>=y)
			{
				a=y;
				b=0;
			}
		else
		{
			a=x;
			if(x*2<=y)
			{
				b=x;
			}
			else
			{
				b=y-x;
			}
		}
		long int noe=n*m;
		long ans=(noe+1)/2*max(a,b)+(noe)/2*min(a,b);
		cout<<ans<<endl;
		}
	}
return 0;
}
 
