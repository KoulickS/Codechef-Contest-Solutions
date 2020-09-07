#include <bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
    {
        char ch;
        cin>>ch;
        if(ch=='B'||ch=='b')
        {
            cout<<"BattleShip";
        }
        else if(ch=='c'||ch=='C')
        {
            cout<<"Cruiser";
        }
        else if(ch=='d'||ch=='D')
        {
            cout<<"Destroyer";
        }
        else if(ch=='f'||ch=='F')
        {
            cout<<"Frigate";
        }
        cout<<endl;
    }
	return 0;
}
