#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // Number of problems

    int solved_problems = 0;

    for (int i = 0; i < n; ++i) {
        int petya_sure, vasya_sure, tonya_sure;
        cin >> petya_sure >> vasya_sure >> tonya_sure; // 1 if sure, 0 if not

        int sure_count = petya_sure + vasya_sure + tonya_sure;

        if (sure_count >= 2) {
            solved_problems++;
        }
    }

    cout << solved_problems << endl;

    return 0;
}