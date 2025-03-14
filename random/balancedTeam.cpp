#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> skills(n);
    int total_sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> skills[i];
        total_sum += skills[i];
    }
    
    // If the total sum is odd, it's impossible to divide into two equal parts
    if (total_sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }
    
    // Target sum for each team
    int target_sum = total_sum / 2;
    vector<int> team1, team2;
    
    // Sort the skills in descending order
    sort(skills.rbegin(), skills.rend());
    
    int current_sum = 0;
    
    // Try to add participants to team1 until we reach the target sum
    for (int i = 0; i < n; i++) {
        if (current_sum + skills[i] <= target_sum) {
            team1.push_back(skills[i]);
            current_sum += skills[i];
        } else {
            team2.push_back(skills[i]);
        }
    }
    
    // Now, we should have two teams where the sum is equal
    if (current_sum == target_sum) {
        cout << "YES" << endl;
        for (int i = 0; i < team1.size(); i++) {
            cout << team1[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < team2.size(); i++) {
            cout << team2[i] << " ";
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}
