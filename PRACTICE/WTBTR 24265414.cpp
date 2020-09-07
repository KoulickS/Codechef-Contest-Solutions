#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    int A;
        int B;
        int N;
        int ad[N];
        int sub[N];
        cin>>T;
    while(T--)
    {
        
        cin>>N;
        for(int i=0;i<N;i++)
        {
           cin>>A>>B;
           ad[i]=A+B;
           sub[i]=A-B;
           
            
        }
        sort(ad,ad+N);
        sort(sub,sub+N);
        double temp,semp;
        double temp1=1000000001,semp1=1000000001;
        for(int i=0;i<N-1;i++)
        {
            temp=abs(ad[i+1]-ad[i]);
            if(temp<temp1)
            temp1=temp;
            semp=abs(sub[i+1]-sub[i]);
            if(semp<semp1)
            semp1=semp;

        }

        cout<<setprecision(15);
        if(semp1<temp1)
        cout<<0.5*semp1<<endl;
        else
        cout<<0.5*temp1<<endl;
        memset(ad,0,sizeof ad);
         memset(sub,0,sizeof sub);
    }
    }