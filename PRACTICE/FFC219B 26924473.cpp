#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t,n,l,r;
	long long int a[100003], i;
	cin>>t;
    a[1]=24;
	for(i=2;i<100003;i++)
	{
		a[i]=a[i-1] + ((((((i)*(i+1))%mod)*(i+2))%mod)*(i+3))%mod;
	}
	while(t--)
	{
		cin>>l>>r;
		if(l==1)
        cout<<a[r]%mod<<"\n";
        else
		cout<<abs((a[r]-a[l-1] + mod)%mod)<<"\n";
	}
	return 0;
}