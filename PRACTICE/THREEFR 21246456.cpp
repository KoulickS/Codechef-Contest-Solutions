#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,x,y,z;
    cin>>T;
    while(T--)
    {
        cin>>x>>y>>z;
        if(x==(y+z)||y==(x+z)||z==(x+y))
        {
            cout<<"yes\n";
        }
        else cout<<"no\n";
    }
}
