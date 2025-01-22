#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int reversedNumber = 0;
    
    // Reverse the digits
    while (n > 0) {
        int digit = n % 10; // Get the last digit
        reversedNumber = reversedNumber * 10 + digit; // Add it to the reversed number
        n = n / 10; // Remove the last digit from n
    }
    
    // Output the reversed number
    cout << reversedNumber << endl;
    
    return 0;
}
