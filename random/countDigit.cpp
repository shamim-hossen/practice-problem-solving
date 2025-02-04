#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Initialize a counter for digits
    int count = 0;

    // Count the number of digits
    while (N > 0) {
        count++;      // Increment the counter for each digit
        N /= 10;      // Remove the last digit of N
    }

    // Print the count of digits
    cout << count << endl;

    return 0;
}
