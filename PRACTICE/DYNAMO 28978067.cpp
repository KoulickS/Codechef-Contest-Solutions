#include <bits/stdc++.h>
using namespace std;    

    int main()
    {
        long long t,n,s,a,b,c,d,e,k;
        cin>>t;
        while(t--)
        {
            cin>>n;
            cin>>a;
            long long p=1;
            long long i;
            for(i=0;i<n;i++){
               p*=10;
            }
            s=2*p+a;
            cout<<s<<endl;
            //fflush(stdout);
            cin>>b;
            c=p-b;
            cout<<c<<endl;
            //fflush(stdout);
            cin>>d;
            e=p-d;
            cout<<e<<endl;
            //fflush(stdout);
            cin>>k;
            if(k==-1)
            {
                //cout<<endl;
                //fflush(stdout);
                return 0;
            }
        }
        return 0;
    }