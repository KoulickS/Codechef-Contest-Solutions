#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp 
#define pb push_back
#define bb back
#define CHARS_TOTAL 256
#define e endl
ll arr[1005][1005],ans[1000005];
/* For counting number of digits, directly do floor(log10(n)+1)*/
using namespace std;

ll power(ll x, unsigned ll y)  //Power in O(logn)
{  
    ll temp;  
    if(y == 0)  
        return 1;  
    temp = power(x, y / 2);  
    if (y % 2 == 0)  
        return temp * temp;  
    else
    {  
        if(y > 0)  
            return x * temp * temp;  
        else
            return (temp * temp) / x;  
    }  
} 
bool comp(int a, int b) 
{ 
    return (a < b); 
} 

int main()
{
    fio;
    ll T,i,j,m,n,k,answer=0,x,y;
    cin>>T;
    while(T--){
    	cin>>n>>m;
    	for(k=1;k<=m*n;k++){
    		answer=0;
           for(i=0;i<n*m;i+=k){
                if(arr[i/m][i%m]!=k){
                	arr[i/m][i%m]=k;
                    answer++;
                }
                if(arr[i%n][i/n]!=k){
                	arr[i%n][i/n]=k;
                    answer++;
                }
           }
           cout<<answer<<" ";;
       }
           cout<<endl;
    }
}