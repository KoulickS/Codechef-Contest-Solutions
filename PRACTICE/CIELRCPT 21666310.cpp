#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T,p,i,j;
  	int vals[12] = {1,2,4,8,16,32,64,128,256,512,1024,2048};
  	scanf("%d",&T);
  	while(T--)
 	{
    	 scanf("%d",&p);
         j=0;
    	 for(i=11;i>=0;i--)
    	   {
       	     j +=p/vals[i];
             p = p%vals[i];
           }
         printf("%d\n",j);
       }
    return 0;
}