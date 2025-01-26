#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;  // Read the input number

    // Check if N is a power of two
    if (N > 0 && (N & (N - 1)) == 0) {
        cout << "YES" << endl;  // If true, it is a power of two
    } else {
        cout << "NO" << endl;   // If false, it is not a power of two
    }

    return 0;
}
