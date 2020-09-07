#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
cin.tie(NULL);
ios_base::sync_with_stdio(false);
cout.tie(NULL);
int t,mini,maxi;
int a,b;
cin>>t;
while(t--){
    cin>>a>>b;
    mini=(a>=b)?a:b;
    maxi=a+b;
    cout<<mini<<" "<<maxi<<"\n";
    }
return 0;
}
