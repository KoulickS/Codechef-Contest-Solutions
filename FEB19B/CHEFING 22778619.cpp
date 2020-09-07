#include <bits/stdc++.h>
using namespace std;

const int MAX_CHAR = 26;

void commonCharacters(string str[], int n)
{

    bool prim[MAX_CHAR];
    int c=0;
    memset(prim, true, sizeof(prim));


    for (int i = 0; i < n; i++) {


        bool sec[MAX_CHAR] = { false };


        for (int j = 0; str[i][j]; j++) {


            if (prim[str[i][j] - 'a'])
                sec[str[i][j] - 'a'] = true;
        }


        memcpy(prim, sec, MAX_CHAR);
    }
    for (int i = 0; i < 26; i++)
        if (prim[i])
            c++;

cout<<c<<endl;
}


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,i;
        cin>>n;
        string str[n];
        for(i=0;i<n;i++)
            cin>>str[i];
        commonCharacters(str, n);
        cout<<endl;
    }
    return 0;
}
