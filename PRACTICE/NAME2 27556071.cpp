#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	int t,i,j,count;
	char a[25000],b[25000];
	scanf("%d ",&t);
	while(t--)
	{
	    scanf("%s %s ",a,b);
	    count=0;
	    
        if(strlen(a)>=strlen(b))
        {
	  for(i=0,j=0;i<strlen(a);i++)
	  {
	      if(a[i]==b[j])
	      j++;
	  }
	    if(j==strlen(b))
	    {
	        printf("YES \n");
	       
	    }
	    else
	    {
	        printf("NO \n");
	    }
        }
        else
        {
            	  for(i=0,j=0;j<strlen(b);j++)
	  {
	      if(a[i]==b[j])
	      i++;
	  }
	    if(i==strlen(a))
	    {
	        printf("YES \n");
	       
	    }
	    else
	    {
	        printf("NO \n");
	    }
            
        }
	    
	}
	
	return 0;
}

