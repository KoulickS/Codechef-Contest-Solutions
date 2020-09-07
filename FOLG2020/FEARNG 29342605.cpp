#include <bits/stdc++.h> 

 using namespace std; 

int josephus(int n, int k) 
{ 

  if (n == 1) 

    return 1; 

  else

    /* The position returned by josephus(n - 1, k) is adjusted because the 

       recursive call josephus(n - 1, k) considers the original position  

       k%n + 1 as position 1 */

    return (josephus(n - 1, k) + k-1) % n + 1; 
} 

  
// Driver Program to test above function 

int main() 
{ int t;
cin>>t;
while(t--){

  int n; 
cin>>n;
  int k = 2; 

  cout<<josephus(n, k)<<endl; 
}
  return 0; 
} 