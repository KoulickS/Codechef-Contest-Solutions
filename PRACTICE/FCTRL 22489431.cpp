#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  scanf("%d",&T);
  while(T--)
  {
  int N,trailingZeros = 0,tmp;
  scanf("%d",&N);

  while ((tmp = N / 5) >= 1) {
    trailingZeros+=tmp;
    	N= tmp;
               }
  printf("%d\n",trailingZeros);
  }
 }