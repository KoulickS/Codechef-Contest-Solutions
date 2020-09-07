#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
#define cc continue
#define bb back
#define e endl
#define rz return 0
#define lld long double
#define inf 999999999999
using namespace std;
int main(){
      ll T;
      cin>>T;
      while(T--){
          ll N;
          cin>>N;
          ll i,aa=0,flag1=0,flag2=0,flag3=0;
          long double a,b,c,d,x,y,z,l,sum1=0.0,sum2=0.0,sum3=0,sum4=0;
          vector<lld>v(0,N),v1(0,N),v2(0,N);
          
          
          for(i=0;i<N;i++){
              cin>>a;
              v.pb(a);
              if(a==1){
                  flag1++;
              }
          }
          
          
          
          for(i=0;i<N;i++){
              cin>>a;
              v1.pb(a);
              if(a==0){
                  flag2++;
              }
          }
          //cout<<flag1<<" "<<flag2;
           for(i=0;i<N;i++){
               b=v[i]*v1[i];
               sum1+=b;
           }
           for(i=0;i<N;i++){
               
               if(v[i]!=0) c=1/v[i];
               else c=inf;
               
               sum2+=c;
           }
           if(b==0){
               aa=0;
           }
           if(sum1!=0&&sum1*sum2>0)
           d=(0.5*sqrt(sum2/sum1));
           else d=inf;
           for(i=0;i<N;i++){
               x=4*d*d*v[i]*v[i];
               y=1/x;
               z=y-v1[i];
               v2.pb(z);
           }
           for(i=0;i<v2.size();i++){
               if(v2[i]+v1[i]>=0)
               l=sqrt(v2[i]+v1[i]);
               else l=0;
               sum3+=l;
           }
           if(aa=0 || sum1<0 || sum2<0){
               cout<<-1<<endl;
           }
           else if(flag1+flag2==2*N){
               for(i=0;i<N+1;i++){
                   cout<<0<<" ";
               }
           }
           else if(flag2==N){
               if(sum1==0){
                   for(i=0;i<N;i++){
                       if(v[i]==0){
                           flag3=1;
                           break;
                       }
                   }
                   if(flag3==1){
                       cout<<-1<<endl;
                   }
                   else{
                       for(i=0;i<N;i++){
                           sum4+=sqrt(v1[i]);
                       }
                       cout<<sum4<<" ";
                       for(i=0;i<N;i++){
                           cout<<v1[i]<<" ";
                       }
                   }
               }
               else if(flag3==0){
                   for(i=0;i<N+1;i++){
                       cout<<0<<" ";
                   }
               }
           }
        else{
                cout<<fixed<<setprecision(10);
                cout<<sum3<<" ";
                
           for(i=0;i<v2.size();i++){
              cout<<v2[i]<<" ";
            }
           }
           
           
           
           cout<<endl;
      }
    
}