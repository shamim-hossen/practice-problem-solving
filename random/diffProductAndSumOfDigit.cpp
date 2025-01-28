#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long product = 1, sum = 0;
    
    // Loop to calculate the product and sum of digits
    while (n > 0) {
        int digit = n % 10;
        product *= digit;
        sum += digit;
        n /= 10;
    }
    
    // Output the absolute difference between product and sum
    cout << abs(product - sum) << endl;
    
    return 0;
}
