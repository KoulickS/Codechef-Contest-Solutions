#include <bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/trie_policy.hpp> 
#define endl '\n' 
#define sz size 
#define f first 
#define fbo find_by_order 
using namespace std; 
using namespace __gnu_pbds; 
#define ll long long int 
#define ordered_set tree<pair<int,int>,null_type, greater<pair<int,int>>,rb_tree_tag, tree_order_statistics_node_update> 
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); 
int main(){ 
     fio; 
     ll n; 
     cin>>n; 
     ordered_set s; 
     string str="No reviews yet"; 
     ll c=0; 
     while(n--){ 
		 ll input; 
		 ll x; 
		 cin>>input; 
		 if(input==1){ 
			 cin>>x; 
			 c++; 
			 s.insert({x,c});  
		 } 
		 else{ 
			 if(s.sz()<3){  
		     cout<<str<<endl; 
			 } 
			 else 
             { 
		     ll z=s.size()/3; 
			 z=z-1; 
             cout<<s.fbo(z)->f; 
             cout<<endl; 
			 } 
	     } 
	 } 
}   
