#include<bits/stdc++.h>
#define ll long long int
#define r return 0
#define pb push_back
#define mp make_pair
#define llu unsigned long long int
using namespace std;
int main(){
    ll T;
    cin>>T;
    while(T--){
        ll N,i,c=0;
        cin>>N;
        string str,str1;
        cin>>str;
        cin>>str1;
        for(i=0;i<N;i++){
            if(str[i]==str1[i]){
                c++;
            }
            else if(str1[i]!='N'){
                i++;
            }
        }
        cout<<c<<endl;
    }
    r;
}