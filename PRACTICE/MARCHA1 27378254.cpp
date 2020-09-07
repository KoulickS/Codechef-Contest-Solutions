#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
        }
        
        int range=(1<<n)-1;
        bool flag=false;
        for(int k=1;k<=range;k++)
        {
            int no=k;
            int j=0;
            int sum=0;
            while(no>0)
            {
                if(no&1)
                {
                    sum+=arr[j];
                }
                j++;
                no=no>>1;
            }
            if(sum==m)
            {
                flag=true;
                cout<<"Yes"<<endl;
                break;
            }
        }
        if(flag==false)
            cout<<"No"<<endl;
    }
    return 0;
}