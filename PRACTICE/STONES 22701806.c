#include<stdio.h>
#include<string.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
    {
        char j[1001],s[1001];
        int jl,sl,i,k,c=0;
        scanf("%s%s",j,s);
        jl=strlen(j);
        sl=strlen(s);
        for(i=0;i<sl;i++)
            for(k=0;k<jl;k++)
                if(s[i]==j[k])
                    { c++;
                       break;
                    }
    printf("%d\n",c);}
    return 0;
}