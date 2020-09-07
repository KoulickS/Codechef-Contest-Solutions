#include<bits/stdc++.h>
#define MAX_LIMIT 100000
using namespace std;
int main()
{
    long long T;
    scanf("%lld",&T);
    while(T--)
    {
        long long N,a[MAX_LIMIT],b[MAX_LIMIT],i,count=0;
        cin>>N;
        for(i=0;i<N;i++)
        {
           cin>>a[i]>>b[i];
        }
        for(i=0;i<N;i++)
        {
            if(b[i]<a[i+1])
                count++;
        
                
        }
        
        cout<<count+2<<endl;
    }
}