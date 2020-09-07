#include<bits/stdc++.h>
#include <vector>
#include<iterator>
#include <algorithm>
using namespace std;
#define vi              vector<int>
void ash()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}
int main()
{
    ash();
    int t;
    cin>>t;
    while(t--){
int n,s;
cin>>n;
cin>>s;
vi p;
vi a;
vi b;
for(int i=0;i<n;i++)
{
    int t;
    cin>>t;
    p.emplace_back(t);
}
int x=0,y=0;
for(int v=0;v<n;v++)
{
    int z;
    cin>>z;
    if(z==0)
    a.emplace_back(p[v]);
    else
    b.emplace_back(p[v]);
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
if(a.size()==0 || b.size()==0 ||n==1) cout<<"no"<<"\n";
else{
if(b[0]+a[0]+s>100)
cout<<"no"<<"\n";
else cout<<"yes"<<"\n";
}
    }
}

 
