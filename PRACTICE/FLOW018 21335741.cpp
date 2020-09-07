#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
     {
     int N,i, fact=1;
     scanf("%d",&N);
     for(i=1;i<=N;i++)
        {
           fact=fact*i;
        }
        printf("%d\n",fact);
     }
}
     
     