#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,q,a=0,b=0,c=0;
        cin>>n>>p>>q;
        int A[n];
        for(int i=0;i<n;i++)cin>>A[i];
        for(int i=0;i<n;i++)
        {
            if(A[i]%p==0 && A[i]%q==0)c++;
            else if(A[i]%p==0)a++;
            else if(A[i]%q==0)b++;
        }
        if(c==0)
        {
            if(a>b)cout<<"BOB\n";
            else cout<<"ALICE\n";
        }
        else
        {
            if(a>=b)cout<<"BOB\n";
            else cout<<"ALICE\n";
        }
    }
    return 0;
}
