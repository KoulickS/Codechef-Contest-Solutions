/* 

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
#define pob pop_back
#define r return 0
using namespace std;
int gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int findGCD(vector<ll>arr,ll n) 
{ 
    ll result = arr[0]; 
    for (ll i = 1; i < n; i++) 
        result = gcd(arr[i], result); 
  
    return result; 
} 
bool comp(int a, int b) 
{ 
    return (a < b); 
} 
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll n;
        cin>>n;
        set<ll>s;
        ll a,i;
        for(i=0;i<n;i++){
            cin>>a;
            s.insert(a);
        }
        vector<ll>v,v1,v2;
        v.assign(s.begin(),s.end());
        ll k=v.size();
        if(k==1 && k!=n){
            cout<<2*v[0]<<endl;
            continue;
        }
        else{
        ll m=v1.size();
        ll j=v2.size();
        /*for(i=0;i<k;i++){
             cout<<v[i];
        }*/
        v1=v;
        v2=v;
        ll x,y;
      /*  for(i=0;i<k;i++){
            cout<<v2[i]<<" ";
        }*/
        v1.erase(v1.begin()+v1.size()-1);
        //for(i=0;i<v1.size();i++){cout<<v1[i];}
       // v2.erase(v1.begin()+j);
        v2.erase(v2.begin()+v2.size()-2);
       // for(i=0;i<v2.size();i++){cout<<v2[i];}
       x=findGCD(v1,v1.size());
       y=findGCD(v2,v2.size());
      // cout<<x<<" "<<y;
      ll d,f;
      //cout<<v[v.size()-1];
      //cout<<v[v.size()-2];
      d=x+v[v.size()-1];
      f=y+v[v.size()-2];
      //cout<<d<<" "<<f;
      cout<<max(d,f)<<endl;
        }
    }
}