#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        int sum = 0;
        sum += a % 10;
        while (a>9){
            a=a/10;
        }
        sum += a;
        cout << sum << endl;
    }
}
