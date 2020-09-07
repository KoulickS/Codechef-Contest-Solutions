#include <iostream>
using namespace std;
int main()
{
int t,n,a[6]={100,50,10,5,2,1};
cin>>t;
while(t--)
{
int c=0;
cin>>n;
for(int i=0;i<=5;i++)
{
    if(n>=a[i])
    {
    c+=n/a[i];
    n=n%a[i];
    }
    if(n==0)
    break;
}
cout<<c<<endl;
}
return 0;
}

