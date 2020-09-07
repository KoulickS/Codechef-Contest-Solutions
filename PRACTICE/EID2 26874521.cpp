#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp 
#define pb push_back
#define bb back
#define CHARS_TOTAL 256
#define e endl
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std;
int main(){
	ll T;
	cin>>T;
	while(T--)
	{
		ll c1,c2,c3,p1,p2,p3;
		cin>>c1>>c2>>c3>>p1>>p2>>p3;
		bool f=true;
		if(c1==c2)
		{
			if(p1!=p2){
			 f=false;}
		}
		if(c1==c3)
		{
			if(p1!=p3){
				f=false;
			}
		}
		if(c1>c2)
		{
			if(p1<=p2){
				f=false;}
		}
		
		if(c1>c3)
		{
			if(p1<=p3){
				f=false;
			}
		}
		if(c1<c2)
		{
			if(p1>=p2)
				f=false;
		}
		if(c1<c3)
		{
			if(p1>=p3)
				f=false;
		}
		if(c2==c3)
		{
			if(p2!=p3)
				f=false;
		}
		if(c2>c3)
	   {
			if(p2<=p3)
				f=false;
		}
		if(c2<c3)
		{
			if(p2>=p3)
				f=false;
		}
		
		if(f)
			cout<<"FAIR"<<endl;
		else
			cout<<"NOT FAIR"<<endl;
	}
}