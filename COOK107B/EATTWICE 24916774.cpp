#include<bits/stdc++.h>
#define ll long long int
#define r return 0
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define llu unsigned long long int
using namespace std;
int main(){
    ll T;
    cin>>T;
    while(T--){
        map<ll,ll>m;
        ll N,M,a,b,i,c=0,d=0;
        cin>>N>>M;
        for(i=0;i<N;i++){
            cin>>a>>b;
            m[a]=max(m[a],b);
        }
        for(auto b:m){
            if (b.s>c){
                d=c;
                c=b.s;
            }
            else if(b.s>d){
                d=b.s;
            }
        }
        cout<<c+d<<endl;
    }
    r;
}