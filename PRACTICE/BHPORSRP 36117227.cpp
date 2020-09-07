#include<iostream>
#include<vector>
#include<string>
#include<bits/stdc++.h>
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX INT_MAX
#define MIN INT_MIN
#define ull unsigned long long int
#define ll long long
#define li long int
#define lf long double;
#define pi 3.14159;
#define mod 1000000007;
using namespace std;

int main()
{
    FASTIO;
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        string s1="berhampore";
        string s2="serampore";
        int b=0,s=0;
        for(int i=0;str[i]!='\0';i++)
            str[i]=tolower(str[i]);
        stringstream st(str);
        string word;
        while(st>>word)
        {
            if(word==s1)
                b=1;
            if(word==s2)
                s=1;
        }
        if(b==1&&s==1)
            cout<<"Both";
        else if(b==1)
            cout<<"GCETTB";
        else if(s==1)
            cout<<"GCETTS";
        else
            cout<<"Others";
        cout<<"\n";
    }
    return 0;
}

