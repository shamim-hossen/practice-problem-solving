#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    // all positive divisor of n
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            cout << i << "\n";
        }
    }

    return 0;
}
