#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int T;
 	scanf("%d",&T);
 	while(T--)
 	{
 	  int n,s[10000],i,x=1000000000;
 	  scanf("%d",&n);
 	  for(i=0;i<n;i++)
 	  {
 	   scanf("%d",&s[i]);}
 	   sort(s,s+n);
      for(i=0;i<n-1;i++)
      {
          if(s[i+1]-s[i]<x)
            x=s[i+1]-s[i];
      }
      printf("%d\n",x);

 	}
 }
