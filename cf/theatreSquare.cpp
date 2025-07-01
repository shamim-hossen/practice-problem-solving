#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, a;
    cin >> n >> m >> a;

    // Use ceiling division to calculate how many tiles fit in each dimension
    long long tiles_length = (n + a - 1) / a;
    long long tiles_width = (m + a - 1) / a;

    cout << tiles_length * tiles_width << endl;
    return 0;
}
