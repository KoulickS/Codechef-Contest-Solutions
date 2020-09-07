/*
Hi! Stalker
█▀▀▄░░░░░░░░░░░▄▀▀█
░█░░░▀▄░▄▄▄▄▄░▄▀░░░█
░░▀▄░░░▀░░░░░▀░░░▄▀
░░░░▌░▄▄░░░▄▄░▐▀▀
░░░▐░░█▄░░░▄█░░▌▄▄▀▀▀▀█ 
░░░▌▄▄▀▀░▄░▀▀▄▄▐░░░░░░█
▄▀▀▐▀▀░▄▄▄▄▄░▀▀▌▄▄▄░░░█
█░░░▀▄░█░░░█░▄▀░░░░█▀▀▀
░▀▄░░▀░░▀▀▀░░▀░░░▄█▀
░░░█░░░░░░░░░░░▄▀▄░▀▄
░░░█░░░░░░░░░▄▀█░░█░░█
░░░█░░░░░░░░░░░█▄█░░▄▀
░░░█░░░░░░░░░░░████▀
░░░▀▄▄▀▀▄▄▀▀▄▄▄█▀
*/

#include <bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define pp pop_back
#define F first
#define S second

#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

using namespace std;

int main()
{
    fastIO;
    ll N,Q,last=0;
    cin>>N>>Q;
    vector<ll> f(N),s(N);
    for(ll i=0;i<N;i++)
    {
        cin>>f[i];
        last=last^f[i];
        s[i]=last;
    }
    while(Q--)
    {
        ll k;
        cin>>k;
        if((k%(N+1))==0)
        {
            cout<<0<<endl;
        }
        else{
            k=(k%(N+1));
            cout<<s[k-1]<<endl;
        }
    }
    return 0;
}