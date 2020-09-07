#include<bits/stdc++.h>
using namespace std;
long long int compare(const void *p1,const void *p2)
{
    return(*(long long int *)p1-*(long long int *)p2);
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int n,k,e,m,en;
        scanf("%lli%lli%lli%lli",&n,&k,&e,&m);
        
        long long int arr1[n]={0};
        
        for(int j=1;j<n;j++)
        {
            for(int kk=0;kk<e;kk++)
            {
                scanf("%lli",&en);
                //printf("en %d\n",en);
                arr1[j]=arr1[j]+en;
            }
            //printf("arr1[%d]=%lli\n",j,arr1[j]);
        }
        
        //printf("printing the element in shorted order\n");
        /*for(int gg=0;gg<n-1;gg++)
        printf("%lli\t",arr1[gg]);
        printf("\n");*/
        
        
        long long int noo;
        long long int myno=0;
        for(long long int u=1;u<e;u++)
        {scanf("%lli",&noo);
           
        	arr1[0]+=noo;
        }
        
        sort(arr1+1,arr1+n);
        //printf("printing the element in shorted order\n");
        /*for(int gg=0;gg<n-1;gg++)
        printf("%lli\t",arr1[gg]);
        printf("\n");*/
        
        //printf("my no is %lli\n",myno);
        long long int z=arr1[n-k]+1;
        if(arr1[0]>z){
	        cout<<0<<'\n';
        }
	    else if((z-=arr1[0])<=m){
	        cout<<z<<'\n';
	    }
	    else{
	        cout<<"Impossible\n";
	    }
    }
}
