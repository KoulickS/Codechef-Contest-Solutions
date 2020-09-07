#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll M = 1e9 +7;
int main()
{
    ios::sync_with_stdio(0);
	cin.tie(0);
	
    int ignore;
    vector<ll>b(50005);
    cin>>ignore;
    while(ignore--)
    {
        ll n;
        cin>>n;
        
        
        
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
        ll flag = 0;
        for(int i=0; i<n-1; i++)
        {
            if((b[i]&b[i+1]) != b[i])
            {
                cout<<0<<"\n";
                flag = 1;
                break;
            }
        }
        if(flag)
            continue;
        ll ans = 1;
        for(int i=0;i<n-1;i++)
        {
			ll z=__builtin_popcount(b[i]);
            ans*=(1<<z);
            ans%=M;
        }
        cout<<ans<<"\n";
    }
    
}
