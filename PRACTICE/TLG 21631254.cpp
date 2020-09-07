#include<bits/stdc++.h>
using namespace std;
int main()
{
     int N;
     scanf("%d",&N);
     int a,b,i,score1=0,score2=0,lead1=0,lead2=0;
     for(i=1;i<=N;i++)
     {
       scanf("%d%d",&a,&b);
       score1=score1+a;
       score2+=b;
       if(score1>score2)
       {
          if(lead1<(score1-score2))
              lead1=score1-score2;
       }
       else
       {
           if(lead2<(score2-score1))
               lead2=score2-score1;
       }
     }
       if(lead1>lead2)
           printf("1 -",lead1);
       else
           printf("2 -",lead2);

}




