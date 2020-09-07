#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a;
   float b,amt;
   cin>>a>>b;
   if(a<=b && a%5==0)
   {
     amt=b-a-0.5;
     printf("%.2f",amt);
   }
   else
   {
   printf("%.2f",b);
   }
}