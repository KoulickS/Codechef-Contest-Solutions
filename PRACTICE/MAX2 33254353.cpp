#include<bits/stdc++.h>
using namespace std;

int main() {
// your code goes here
	int n,count=0;
	cin>>n;
	string x;
	cin>>x;
	for(int i=n-1;i>=0;i--)
	{
		if(x[i]=='0')
			count++;
		else
			break;
	}	
	cout<<count<<endl;
	return 0;
}
