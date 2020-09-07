#include<bits/stdc++.h>
#define ll long long int
#define MAX_LIMIT 100000
#define m 1000000007
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main() {
    fio
	ll n;
	cin>>n;
	while(n--)
	{
		ll n,z,i,arr[MAX_LIMIT]={0};
		cin>>n>>z;
		for(i=0;i<n;i++){
		cin>>arr[i];
		}
		while(z--){
		    ll a=0;
			for(i=a;i<n;i++)
			{
				if(arr[i] == 0 && arr[i+1] == 1)
				{
				    
					arr[i] = 1;
					arr[i+1] = 0;
					i++;
					
				}
				
			}
		}
		for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
		}
			cout<<endl;
	}

	return 0;
}