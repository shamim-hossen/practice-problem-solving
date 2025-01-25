#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases
    
    while (T--) {
        int N;
        cin >> N; // Read the number
        
        int sum = 0;  // Variable to store the sum of digits
        
        // Compute the sum of digits
        while (N > 0) {
            sum += N % 10;  // Add the last digit to the sum
            N /= 10;         // Remove the last digit from N
        }
        
        cout << sum << endl; // Print the sum of digits for the current test case
    }
    
    return 0;
}
