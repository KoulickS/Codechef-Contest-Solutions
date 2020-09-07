#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long f[26]={0};
		long long x=0,i,r=0,r1=0,d=0,dis=0,j,sum=0,k=0;
		char s[1000000];
		scanf("%s",&s);
		
		for(i=0;s[i]!='\0';i++)
		{
			f[s[i]-'A']++;
		}
		for (i = 0; i < 26;i++)
		{
			if(f[i]!=0)
			{
				d++;
			}			
		}


		long long c[d];

		for(i=0;i<26;i++)
		{
			if(f[i]!=0)
			{
				c[k++]=f[i];
				sum+=f[i];
			}	

		}
		//checking if all have same freq. then we can skip algo.. by simply printing 0
		
	/*	for(i=0;i<d;i++)
		{
			if(c[i]!=c[i+1])
			dis++;
		}
		if(dis==0)
		{
			cout<<"0\n";
			continue;
			
		}*/
		
		
		sort(c,c+d);
		long long ans[sum+1];
		
		
		for(x=1;x<=sum;x++)
		{	
			//assigning each ans[i] to max
		
			ans[x]=INT_MAX;
			r=0;
			
			//checking divisibility
			
			if(sum%x==0)
			{
				k=sum/x;
				if(x<=d)
				{
					for(i=d-1;(i>=d-x&&i>=0);i--)
					{
						if(c[i]<k)
						r+=abs(k-c[i]);
					}
				ans[x]=r;
				}
				else
				{
					for(i=d-1;i>=0;i--)
					{	
						if(c[i]>k)
						r+=abs(k-c[i]);
					}
				ans[x]=r;	
				}
			}
		}
		
		//finding minimum moves ,i.e ,r
		
		r=INT_MAX;	//assigning r to max
		for(x=1;x<=sum;x++)
			{
				if(r>ans[x])
				r=ans[x];
			}
		cout<<r<<"\n";
	}

}