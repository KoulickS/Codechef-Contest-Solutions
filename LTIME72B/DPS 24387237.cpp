/*
BHAGWAN TUSSI 
GREAT HO! SOLUTION KUBUL KARO XD
Hi! Stalker
█▀▀▄░░░░░░░░░░░▄▀▀█
░█░░░▀▄░▄▄▄▄▄░▄▀░░░█
░░▀▄░░░▀░░░░░▀░░░▄▀
░░░░▌░▄▄░░░▄▄░▐▀▀
░░░▐░░█▄░░░▄█░░▌▄▄▀▀▀▀█ 
░░░▌▄▄▀▀░▄░▀▀▄▄▐░░░░░░█
▄▀▀▐▀▀░▄▄▄▄▄░▀▀▌▄▄▄░░░█
█░░░▀▄░█░░░█░▄▀░░░░█▀▀▀
░▀▄░░▀░░▀▀▀░░▀░░░▄█▀
░░░█░░░░░░░░░░░▄▀▄░▀▄
░░░█░░░░░░░░░▄▀█░░█░░█
░░░█░░░░░░░░░░░█▄█░░▄▀
░░░█░░░░░░░░░░░████▀
░░░▀▄▄▀▀▄▄▀▀▄▄▄█▀
*/
#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MAX_LIMIT 100000
#define r return 0
using namespace std;
int main() {
	fio;
	ll T;
	cin>>T;
	while(T--){
	    ll n,i,c=0;
		string str;
		cin>>str;
		n=str.length();
		map<char,ll>mm;
		for(i=0;i<n;i++)
		mm[str[i]]++;
			for(auto it=mm.begin();it!=mm.end();it++){
				if((it->second)%2==1){c++;}
			}
		if(n%2==1){
			if(c>3){
			cout<<"!DPS"<<endl;}
			else{
			cout<<"DPS"<<endl;}
		}
		else{
			if(c==2){
			cout<<"DPS"<<endl;}
			else{
			cout<<"!DPS"<<endl;}
		}
	}
	r;
}