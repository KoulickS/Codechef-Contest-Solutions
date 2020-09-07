#include <stdio.h>
#include<string.h>

int main(void) 
{
     
     char S[27];
     int c[26]={0};
     int N;
     scanf("%s %d",S,&N);
     char w[13];
     int i=0,j=0,l=0,k=0;
     
     for(i=0;i<strlen(S);i++)c[S[i]-'a']=1;
    
     for(i=0;i<N;i++)
     {
          k=0;
          
     getchar();
     scanf("%s",w);
     l=strlen(w);
     for(j=0;j<l;j++)
     if(c[(w[j])-'a']==1)++k;
     if(k==l)printf("Yes\n");
     else printf("No\n");
     
     }
	// your code goes here
	return 0;
}

