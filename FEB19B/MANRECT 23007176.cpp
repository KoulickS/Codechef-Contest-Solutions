#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;	
	long long a=0,b=0,c=0,d=0,e,var1=0,var2=0,x1=0,y1=0,x2=0,y2=0, k=1000000000;
	cin>>T;
	while(T--)
	{
		cout<<"Q 0 0\n";
		cin>>a;
		cout<<"Q "<<k<<" 0\n";
		cin>>b;
		cout<<"Q "<<k<<" "<<k<<"\n";
		cin>>c;
		cout<<"Q 0 "<<(b-c+k)/2<<"\n";
		cin>>x1;
		y1=a-x1;
		cout<<"Q "<<k<<" "<<(b-c+k)/2<<"\n";
		cin>>var1;
		x2=k-var1;
		y2=2*k-x2-c;
		cout<<"A "<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<"\n";
		cin>>e;
		if(e!=1)
		{
	          break;
		}
 
	}
}
 