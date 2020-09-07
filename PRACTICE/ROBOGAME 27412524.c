#include<stdio.h>
#include<string.h>
void main()
{  
   int T ,k,i,t,flag,d;
   scanf("%d",&T);
  if(1<=T && T<=30000)
  { 
    while(T>0)
    { 
      int l,a[51];
      char s[51];
      scanf("%s",s);
      l=strlen(s);
      k=0;
      flag=0;
      for(i=0;i<l;i++)
      {
        if( s[i]>=48 && s[i]<=57)
        {
          a[k]=i;
          k++;
        }
      }
        
        for(i=0;i<k-1;i++)
        {
          d=a[i+1]-a[i]-1;
          t=s[a[i+1]]+s[a[i]]-96;
          if(d<t)
            flag=1;
         }
         
         if(flag==0)
           printf("safe\n");
         else
           printf("unsafe\n");
         T--;
     }
   }
}

  
