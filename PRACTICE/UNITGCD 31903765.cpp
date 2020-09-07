#include<bits/stdc++.h>
#define ll long long int
using namespace std;




int main()
{
   
   ll q;
   cin>>q;
   
   for(ll i=1;i<=q;i++)
   {
       ll n;
       cin>>n;
       if(n==1)
       {cout<<1<<endl;cout<<"1 1"<<endl;
           continue;}
       
       cout<<n/2<<endl;
       ll y=0;
       if(n%2==1)
       { cout<<"3 1 2 "<<n<<endl;n-=1;}
       else
       cout<<"2 1 2"<<endl;
       
       
       for(ll i=3;i<=n;i+=2)
       cout<<2<<" "<<i<<" "<<i+1<<endl;
      
       
   }
	
	
	
	return 0;
}