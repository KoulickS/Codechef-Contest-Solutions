#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,i;
    scanf("%d",&T);
    while(T--)
    {
      char S[100];
      int count1=0,count2=0,t;
      scanf("%s\n",S);
      t=strlen(S);//ab
      for(i=0;i<t;i++)
      {
      if(S[i]=='a')
         count1++;
      else
        count2++;
      }
      if(count1>count2)
         printf("%d\n",count2);
      else
        printf("%d\n",count1);
     }
}



