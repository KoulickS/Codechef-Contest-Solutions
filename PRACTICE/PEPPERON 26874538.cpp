#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define mp make_pair
#define pb push_back
#define bb back
#define e endl
using namespace std;
int main(){
     ll n, m, c[100001], d, k, ans, arr1[1001], arr2[1001], arr[1001][1001];
       char cc;
       ll T;
       cin>>T;
       while(T--)
       {
            ll lc = 0, rr = 0;
            d=INT_MAX;
            cin>>n;
            d=INT_MAX;
            ll i,j;
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=n;j++)
                {
                    cin>>cc;
                    if(cc=='1'){
                        arr[i][j]=1;
                    }
                    else{
                        arr[i][j]=0;
                    }
                }
            }
            for(i=1;i<=n;i++)
            {
                    arr1[i]=0;
                    for(j=1;j<=n/2;j++)
                    {
                        arr1[i]+=arr[i][j];
                    }
                    lc=lc+arr1[i];
                    arr2[i]=0;
                    for(j=n/2+1;j<=n;j++)
                    {
                        arr2[i]+=arr[i][j];
                    }
                    rr+=arr2[i];
            }
            d= min(d,abs(lc-rr));
            for(i=1;i<=n;i++)
            {
                d=min(d,abs(lc - 2*arr1[i] + 2*arr2[i] - rr));
            }
            cout<<d<<endl;
       }
       return 0;
}