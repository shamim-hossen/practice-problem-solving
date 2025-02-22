#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Using a plain array instead of vector
    int arr[1000];  // Maximum size of array is 1000, based on constraints
    
    // Read the array elements
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Sort the array
    sort(arr, arr + n);
    
    // If n is odd, return the middle element, otherwise the smaller of the two middle elements
    if (n % 2 == 1) {
        cout << arr[n / 2] << endl;
    } else {
        cout << arr[n / 2 - 1] << endl;
    }
    
    return 0;
}
