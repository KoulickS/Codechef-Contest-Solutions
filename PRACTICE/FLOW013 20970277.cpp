#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int A,B,C;
        cin>>A>>B>>C;
        if(A+B+C == 180 && A>0 && B>0 && C>0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
