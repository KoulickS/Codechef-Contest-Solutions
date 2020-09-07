//Enjoy the process of transformation. Don't worry about results......
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ultraboost ios_base:: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repn(i,a,b) for(ll i=a;i>=b;i--)
#define pb push_back
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

ll com(ll n, ll a)
{
    ll result=1;
    if(n-a<a) 
        a= n-a;
    ll cnt=1;
    rep(i,n-a+1,n+1)
    {
        result*= i;
        result/= cnt;
        cnt++;
    } 
    return result;
}
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
void bubbleSort(int arr[], int n)  
{  
    int i, j;  
    for (i = 0; i < n-1; i++)      
      
    // Last i elements are already in place  
    for (j = 0; j < n-i-1; j++)  
        if (arr[j] > arr[j+1])  
            swap(&arr[j], &arr[j+1]);  
}  

int main()
{
    ultraboost; 
    ll test;
    cin>>test;
    while(test>0)
    {
        ll n;
        cin>>n;
        ll p= (4*n)-1;
        unordered_map<int, int,custom_hash> x, y;
        ll a, b;
        rep(i,0,p)
        {
            cin>>a>>b;
            x[a]++;
            y[b]++;
        }
        ll ans1=0, ans2=0;
        for(auto k:x)
        {
            if(k.second%2!=0)
            {
                ans1= k.first;
                break;
            }
        }
        for(auto j:y)
        {
            if(j.second%2!=0)
            {
                ans2=j.first;
                break;
            }
        }
        cout<<ans1<<" "<<ans2<<"\n";
    test--;       
    }
          
}