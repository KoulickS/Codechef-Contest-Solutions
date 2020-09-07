#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    scanf("%d",&T);
    while(T--)
    {
        long long N;
        int i,c=0,s=0;
        scanf("%ld",&N);
        int A[100000];
        for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
        }
        sort(A,A+N);
        for(i=0;i<N;i++)
        {
            if(c>=A[i])
            {
                s++;
            }
            else
            {
                break;
            }
            c++;
        }
        printf("%d\n",s);
    }
}