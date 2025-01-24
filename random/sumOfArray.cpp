#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Input the size of the array
    int arr[n];  // Declare the array

    // Input the array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of the array elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the sum
    cout << sum << endl;

    return 0;
}
