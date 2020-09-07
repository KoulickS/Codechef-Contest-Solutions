#include <bits/stdc++.h>
using namespace std;
#define f(a,b) for(int i=a; i<b; i++)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() {
    fast;
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n],f[n],j=0;
        f(0,n) {
            cin>>a[i];
            if(a[i]%2==0){
                f[j]=i;
                j=j+1;
            }
        }
        int c=0,fi,se,cnt=0,m=j;
    for(int i=0;i<n;i++)
    {
        if(a[i]%4==0)
        {
            c=c+(n-i);
            cnt=cnt+1;
        }
        else if(a[i]%2==0)
        {
            cnt=cnt+1;
            if(cnt<m)
                c=c+n-f[cnt];
        }
        else
        {
            if(cnt>=m)
                c=c+n-i;
            else
            {
                fi=f[cnt];
                if(cnt+1 < m)
                {
                    se=f[cnt+1];
                    if(a[fi]%4==0) 
                        c=c+n-i;
                    else
                        c=c+(n-i)-(se-fi);
                }
                else
                {
                    if(a[fi]%4==0)
                        c=c+n-i;
                    else
                        c=c+fi-i;
                }
            }
        }
    }
    cout<<c<<endl;
    }
	return 0;
}