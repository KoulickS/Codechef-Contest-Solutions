/* Never use Ideone for compiling, you can get caught

        Author: Koulick Sadhu
        Institution: Jalpaiguri Government Engineering College
*/
#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
#define r return 0
#define m 1000000007
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,z,sum=0;
        cin>>n;
        z=n;
        while(n!=0){
            sum=sum+n; 
            n=n/10;
        }
       cout<<z;
       if(sum==0){
            cout<<0<<endl;
            continue;
        }
        cout<<10-sum<<endl;
    }
    r;
}
/*Contributed by Koulick Sadhu*/