#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	scanf("%d",&T);
	int N[T],i;
	for(i=0;i<T;i++)
	    scanf("%d\n",&N[i]);
    sort(N,N+T);
    for(i=0;i<T;i++)
       printf("%d\n",N[i]);
}
