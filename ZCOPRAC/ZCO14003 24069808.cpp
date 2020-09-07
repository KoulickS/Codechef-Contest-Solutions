#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
{
    ll n,te,N;
    cin>>n;
    N=n;
    vector<ll >v;
    while(n--)
    {
        cin>>te;
        v.pb(te);
    }
    sort(v.begin(),v.end());
    ll a=0,b=0;
    for(ll i=0; i<N; i++)
    {
        b=v[i]*(N-i);
        a=max(a,b);
    }
    cout<<a<<endl;
}
