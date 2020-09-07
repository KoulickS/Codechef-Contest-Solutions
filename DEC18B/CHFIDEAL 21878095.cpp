#include<bits/stdc++.h>
using namespace std;
int main()
{
   int b = (rand() % 3) + 1;
   cout<<b<<endl;
   int a;
   cin>>a;
   if(a==2 && b==1)
     cout<<"3"<<endl;
   else if(a==3 && b==1)
      cout<<"2"<<endl;
   else if(a==1 && b==2)
     cout<<"3"<<endl;

   else if(a==3 && b==2)
     cout<<"1"<<endl;

   else if(a==2 && b==3)
     cout<<"1"<<endl;

   else if(a==1 && b==3)
     cout<<"2"<<endl;
}
