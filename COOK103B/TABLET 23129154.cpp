#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        int N,B,i,count=0;
        scanf("%d%d",&N,&B);
        int W[100],H[100],P[100],r[100]={0},c[100],length;
        for(i=0;i<N;i++)
        {
            scanf("%d%d%d",&W[i],&H[i],&P[i]);
            c[i]=W[i]*H[i];
        }
        for(i=0;i<N;i++)
        {
            if(P[i]<=B)
            {
                r[i]=c[i];
                count++;
            }
        }
        length=sizeof(r)/sizeof(r[0]);
        sort(r,r+length);
        if(count>0)
        {
            printf("%d\n",r[length-1]);
        }
        else
        {
            printf("no tablet\n");
        }
    }
}