#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,i;
		cin>>N;
		string s[N],value="YES";
		for(i=0;i<N;i++)
		{
           cin>>s[i];
        }
        for(i=0;i<N-1;i++)
        {
			if(s[i]=="cookie" && s[i+1]!="milk") value="NO";
		}
		if(s[N-1]=="cookie")value="NO";
           cout<<value<<endl;
	}
}