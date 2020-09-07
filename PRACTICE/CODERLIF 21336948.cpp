#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
     {
     int N[30],i,a=0,j;
     for(j=1;j<=30;j++)
         cin>>N[j];
     for(i=1;i<=30;i++)
     {
        if(N[i]==1)
             a++;
        if(N[i]==0 && a<6)
            a=0;
     }
      if(a>5)
          cout<<"#coderlifematters"<<"\n";
      else if(a<6)
         cout<<"#allcodersarefun"<<endl;
      }
}


