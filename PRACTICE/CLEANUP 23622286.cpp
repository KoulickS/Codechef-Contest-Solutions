#include<bits/stdc++.h>
using namespace std;
int main(){
  int T;
  cin>>T;
  while(T--){
    int n,m,a,b;
    a=b=0;
    int lst[1010]={0};
    cin>>n>>m;
    int job[m];
    for (int i=0;i<m;i++){
      cin>>job[i];
    }
    sort(job,job+m);
    for (int i=0;i<=n;i++){
      if (i==job[a]){
        a++;
      }
      else{
        lst[b++]=i;
      }
    }
    for (int i=1;i<b;i++){
      if (i%2!=0){
        cout<<lst[i]<<" ";
      }
    }
    cout<<endl;
    for (int i=1;i<b;i++){
      if (i%2==0){
        cout<<lst[i]<<" ";
      }
    }
    cout<<endl;
  }
  return 0;
}
