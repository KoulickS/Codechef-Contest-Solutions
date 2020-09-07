#include<bits/stdc++.h>
using namespace std;
int main()
{
 	int N;
 	scanf("%d",&N);
 	if(N%4==0)
 	    N++;
    else
        N--;
    printf("%d",N);

}
