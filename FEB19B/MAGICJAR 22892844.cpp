#include<bits/stdc++.h>
#define MAX_LIMIT 1000000
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long N,i,c,sum=0,a[MAX_LIMIT];
        cin>>N;
        for(i=0;i<N;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        c=sum-N+1;
        cout<<c<<endl;
    }
}
