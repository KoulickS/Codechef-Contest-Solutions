/*
    BHAGWAN TUSSI GREAT HO! TOOFA KUBUL KARO XD
Hi! Stalker
█▀▀▄░░░░░░░░░░░▄▀▀█
░█░░░▀▄░▄▄▄▄▄░▄▀░░░█
░░▀▄░░░▀░░░░░▀░░░▄▀
░░░░▌░▄▄░░░▄▄░▐▀▀
░░░▐░░█▄░░░▄█░░▌▄▄▀▀▀▀█ 
░░░▌▄▄▀▀░▄░▀▀▄▄▐░░░░░░█
▄▀▀▐▀▀░▄▄▄▄▄░▀▀▌▄▄▄░░░█
█░░░▀▄░█░░░█░▄▀░░░░█▀▀▀
░▀▄░░▀░░▀▀▀░░▀░░░▄█▀
░░░█░░░░░░░░░░░▄▀▄░▀▄
░░░█░░░░░░░░░▄▀█░░█░░█
░░░█░░░░░░░░░░░█▄█░░▄▀
░░░█░░░░░░░░░░░████▀
░░░▀▄▄▀▀▄▄▀▀▄▄▄█▀
*/
#include<bits/stdc++.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
using namespace std;
int main()
{
    fio
    ll T;
    cin>>T;
    while(T--){
         ll n,m,x,y,c;
         cin>>n>>m;
         x=max(n,m);
         y=min(n,m);
         if(n==m||x%y==0)
        {
            cout<<"Ari"<<endl;
            continue;
        }
        c=1;
        while(1)
        {
          if(x%y==0 || x/y>1)
            {
              if(c==1){
                cout<<"Ari"<<endl;}
              else{
                  cout<<"Rich"<<endl;
              }
              break;
            }
       x=x-y;
       n=x;
       m=y;
       x=max(m,n);
       y=min(m,n);
       c=c*-1;
     }
   }
}