#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
#define r return 0
#define cc continue
#define bb back
#define e endl
using namespace std;
void func()
{
	ll N;
	cin>>N;
	ll arr[N];
	ll arr1[N+1]={0};
    for(auto &ii:arr)
    {
    cin >> ii;
    }
    ll i,x1,x2;
    arr1[N-1] = arr[N-1]*N;
    for(i=N-2;i>=0;i--)
    {
        x1 = arr[i]*(i+1)+arr1[i+1];
        x2 = arr[i]*(i+2)+arr[i+1]*(i+1)+arr1[i+2];
        arr1[i] = max(x1,x2);
  }
  cout<<arr1[0]<<e;
}
int main()
{
	ll T;
	cin>>T;
	while(T--){
		func();
	}
	r;
}