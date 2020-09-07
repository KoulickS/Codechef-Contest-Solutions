#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int a,b;// 23 19
        cin>>a>>b;
        int c,d,e,sum=0,rem,i;
        c=max(a,b);//23
        for(i=1;i<=c;i=i*10)//i=1, 1<23//i=10,i<23
        {
            d=a;//3//2
            e=b;//9//1
            if((d+e)>9)//12>9//3>9:false
            {
                rem=(d+e);//2
                sum+=rem*i;//2*1+0=2
            }
            else
            {
                rem=d+e;//3
                sum+=rem*i;//3*10+2=32
            }
            a=a/10;//2
            b=b/10;//1

        }
        cout<<sum<<endl;

    }
    return 0;
}
