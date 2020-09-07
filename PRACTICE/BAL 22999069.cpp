#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long T;
    cin>>T;
    while(T--)
    {
        long long x,y,n,m;
        cin>>x>>y>>n>>m;
        long long a=__gcd(x,y);
        x/=a;
        y/=a;
        if(x<=m && y<=n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}