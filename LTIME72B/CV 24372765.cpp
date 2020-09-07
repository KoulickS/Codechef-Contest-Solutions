/*
BHAGWAN TUSSI 
GREAT HO! TOOFA KUBUL KARO XD
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
using namespace std;
bool isVowel(char d){
	if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u')
	return true;
	return false;
}
int main(){
	ll T;
	cin>>T;
	while(T--){
		ll n,i,c=0;
		cin>>n;
		string str;
		cin>>str;
		for(i=0;i<n-1;i++){
			if(!isVowel(str[i])&&isVowel(str[i+1]))
			c++;
		}
		cout<<c<<endl;
	}
	return 0;
}