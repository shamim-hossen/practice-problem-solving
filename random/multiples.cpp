#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (b % a == 0 || a % b == 0) {
        cout << "are multiples";
    } else {
        cout << "aren’t multiples";
    }

    return 0;
}
