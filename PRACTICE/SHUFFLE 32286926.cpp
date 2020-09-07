/*
                         ----------------------------
                              Ankur Kumar Singh    
                         ----------------------------
*/


#include <bits/stdc++.h>
using namespace std;
# define ll  long long  int
# define ld  long double
# define pb push_back
# define pp pop_back
# define ff first
# define ss second
# define mp make_pair
# define ac accumulate
# define mod 1000000007
# define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
# define trace1(x)                cerr << #x << ": " << x << "\n";
# define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << "\n";
# define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << "\n";
# define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << "\n";

int  main()
{
  
   IOS;
   ll t;
   cin>>t;	
   while(t--)
   {
   		ll n,k;
   		cin>>n>>k;
   		ll arr[n+2];
   		for(ll i=1;i<=n;i++)
   			cin>>arr[i];
   		for(ll i=1;i<=n;i++)
   		{
   			if(i+k>n)
   				break;
   			if(arr[i]>arr[i+k])
   			{
   				swap(arr[i],arr[i+k]);
   			}
   		}
   		ll flag=0;
   		for(ll i=n-k+1;i<=n-1;i++)
   		{
   			//cout<<arr[i]<<" ";
   			if(arr[i]>arr[i+1])
   			{
   				flag=1;
   				break;
   			}
   		}
   		if(flag==0)
   		{
   			cout<<"yes\n";
   		}
   		else
   		{
   			cout<<"no\n";
   		}
   }
   

}
