#include<bits/stdc++.h>
#define MAX 100000
using namespace std;
int main()
{
	int T,i;
	cin>>T;
	for(i=0;i<T;i++)
	   {
	     int num, rem,count=0;
	     cin>>num;
	     while(num>0)
         {
             rem=num;
	         if(rem==4)
	            count++;
	         num/=10;
         }
	    cout<<count<<endl;
       }
}





