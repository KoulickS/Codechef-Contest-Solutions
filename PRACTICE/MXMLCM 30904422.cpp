#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
typedef pair<int,int> P;
#define int long long
int m = 1000000007;
int *fact; //Stores factorial till a end point
int powr(int x,int y,int modulo = m){
    if(y==0){
       return 1; 
    }
    int mul = powr(x,y/2,modulo);
    int prod = (mul*mul)%modulo;
    if(y&1){
        prod = (prod*x)%modulo;
    }
    return prod;
}
unordered_map<int,int> factors(int num){
    unordered_map<int,int>v;
    int n = 2;
    while(n<=sqrt(num)){
        if(num%n==0){
           while(num%n==0){
               num/=n;
               v[(n)]+=1;
           } 
        }
        n++;
    }
    if(num!=1){
        v[(num)]+=1;
    }
    return v;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;cin>>T;
    unordered_map<int,int>save[10001];
    for(int m = 1;m<=10000;m++){
        save[m] = factors(m);
    }
    //cin>>T;
    while(T--){
        int N,M;cin>>N>>M;
        unordered_map<int,int>lcm;
        int arr[N];
        for(int i = 0 ;i<N;i++){
            cin>>arr[i];
            unordered_map<int,int> &v  = save[arr[i]];
            for(auto x:v){
                lcm[x.first] = max(lcm[x.first],x.second);
            }
        }
        int val = 1;
        int maxchange =  1;
        for(int u = 1;u<=M;u++){
            unordered_map<int,int> &f = save[u];
            int prod=1;
            for(auto x:f){
                int diff = x.second-lcm[x.first];
                if(diff>0){
                    prod = (prod*powr(x.first,diff,1000000000000));
                }
            }
            if(prod>maxchange){
                val = u;
                maxchange = prod;
            }
        }
        cout<<val<<"\n";
      }
     
}