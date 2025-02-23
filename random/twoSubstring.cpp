#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    
    // Check if there's an "ab" followed by a "ba"
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'a' && s[i + 1] == 'b') {
            for (int j = i + 2; j < n - 1; j++) {
                if (s[j] == 'b' && s[j + 1] == 'a') {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }
    
    // Check if there's a "ba" followed by an "ab"
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == 'b' && s[i + 1] == 'a') {
            for (int j = i + 2; j < n - 1; j++) {
                if (s[j] == 'a' && s[j + 1] == 'b') {
                    cout << "YES" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
