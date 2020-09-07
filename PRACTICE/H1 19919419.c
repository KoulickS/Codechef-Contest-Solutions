#include<stdio.h>
        char seen[98765433]={0};
        int queue[1000000];
        int power(int a,int b)
        {
          int i,j;
          for(i=0,j=1;i<b;j*=a);
          return j;
        }
        int main()
        { 
          int prime[18]={0};
          int head,tail,val,newVal,i,j,k,temp,t,a[3][3];
          prime[2]=prime[3]=prime[5]=prime[7]=prime[11]=prime[13]=prime[17]=1;
          seen[12345678]=1;
          queue[0]=123456789;
          head=0;
          tail=1;
          while(head<tail)
            {
              val=queue[head];
              for(i=2;i>=0;i--)
        	for(j=2;j>=0;j--)
        	  {
        	    a[i][j]=val;val/=10;
        	  }
                    val=queue[head];
              for(i=0;i<3;i++)
        	for(j=0;j<3;j++)
        	  {
        	    if(i+1<3 && prime[a[i][j]+a[i+1][j]])
        	      {
        		for(k=0,temp=1;k<5-i*3-j;k++,temp*=10);
        		newVal=val+(a[i+1][j]-a[i][j])*temp*1000+(a[i][j]-a[i+1][j])*temp;
        		if(!seen[newVal/10])
        		 {
        		    queue[tail++]=newVal;
        		    seen[newVal/10]=seen[val/10]+1;
        		  }
        	      }
        	    if(j+1<3 && prime[a[i][j]+a[i][j+1]])
        	      {
        		for(k=0,temp=1;k<7-i*3-j;k++,temp*=10);
        		newVal=val+(a[i][j+1]-a[i][j])*temp*10+(a[i][j]-a[i][j+1])*temp;
        				if(!seen[newVal/10])
        		  {
        		    queue[tail++]=newVal;
        		    seen[newVal/10]=seen[val/10]+1;
        		  }
        	      }
        	  }
              head++;
            }
          scanf("%d",&t);
          while(t--)
            {
              k=0;
              for(i=0;i<3;i++)
        	for(j=0;j<3;j++)
        	  {
        	    scanf("%d",&a[i][j]);
        	    k=k*10+a[i][j];
        	  }
              k/=10;
              if(seen[k])
        	printf("%d\n",seen[k]-1);
              else
        	printf("-1\n");
            }
          return 0;
          }  