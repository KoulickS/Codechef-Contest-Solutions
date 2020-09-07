#include<bits/stdc++.h>
using namespace std;
int main()
{
   int T;
   scanf("%d",&T);
   while(T--)
   {
     int n,a,b,k,x,y,t,l=0,hcf,lcm;
     scanf("%d%d%d%d",&n,&a,&b,&k);
     x=n/a;
     y=n/b;
    hcf= __gcd(a,b);
     lcm = (a * b) / hcf;
     t=n/lcm;
     l=x+y-(2*t);
     if(l>=k)
     {
      printf("Win\n");
     }
     else
     {
     printf("Lose\n");
     }
 }
}
