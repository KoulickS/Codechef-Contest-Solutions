#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
ll t;
cin>>t;
while(t--)
{
string str;
cin>>str;
reverse(str.begin(),str.end());
str.erase(0, str.find_first_not_of('0'));
cout<<str<<endl;
}
return 0;
}
