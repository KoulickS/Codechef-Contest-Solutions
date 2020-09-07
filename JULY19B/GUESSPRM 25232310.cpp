/*

                    Author      : Koulick Sadhu
                    Institution : Jalpaiguri Government Engineering College
*/
#include<bits/stdc++.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define r return 0
#define MAX_LIMIT 100000
#define bc __builtin_popcount
#define c cout
#define ee endl
#define s sort
#define b begin
#define e end
using namespace  std;
int main(){
        fio;
        ll T;
        cin>>T;
        while(T--){
            ll xx=100000;
            cout<<"1"<<" "<<xx<<endl;
            ll a;
            cin>>a;
            ll i,j,k;
            xx=pow(xx,2)-a;
            ll yy=100017;
            cout<<"1"<<" "<<yy<<endl;
            ll b;
            cin>>b;
            vector<ll>vec;
            yy=pow(yy,2)-b;
            if(yy%2==0){
                vec.push_back(2);
            }
            while(yy%2==0){
                yy=yy/2;
            }
            for(ll j=3;j*j<=yy;j=j+2){
                if(yy%j==0){
				    vec.push_back(j); 
		        while(yy%j==0){
		             yy/=j;
		           }     
			    }
            }
            if(yy>2){
                vec.push_back(yy);
            }
            for(ll i=0;i<vec.size();i++){
                if(xx%vec[i]==0){
                    k=vec[i];
                }
            }
            c<<"2"<<" "<<k<<ee;
            string str;
            cin>>str;
            if(str=="No"){
                exit(0);
            }
    }
}
            