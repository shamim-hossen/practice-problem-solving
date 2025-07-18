/**
take vector input and print
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int> v;
    cin >> n;

    for( int i = 0; i < n; i++ ){
        int a;
        cin >> a;
        v.push_back(a);        
    }
    cout << v.size() << endl;
    for( int i = 0; i < n; i++ ) cout << v[i] << " ";
    cout << endl;
    
    return 0; 
}



// C++ Vector Operations
#include <bits/stdc++.h> // For all C++ standard libraries
using namespace std;

int main() {
    // 1. Declare and initialize vector
    vector<int> v = {5, 3, 8, 1};

    // 2. Adding elements using push_back
    v.push_back(10);
    v.push_back(2);

    // 3. Display all elements
    cout << "Vector elements:\n";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    // 4. Accessing element using at() and []
    cout << "First element (v[0]): " << v[0] << endl;
    cout << "Second element (v.at(1)): " << v.at(1) << endl;

    // 5. Inserting element at specific position
    v.insert(v.begin() + 2, 99); // Insert 99 at index 2
    cout << "After inserting 99 at index 2:\n";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 6. Erasing an element
    v.erase(v.begin() + 3); // Remove element at index 3
    cout << "After erasing element at index 3:\n";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 7. Sorting the vector
    sort(v.begin(), v.end());
    cout << "After sorting:\n";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 8. Reverse the vector
    reverse(v.begin(), v.end());
    cout << "After reversing:\n";
    for (int x : v) cout << x << " ";
    cout << endl;

    // 9. Clear all elements
    v.clear();
    cout << "Size after clear: " << v.size() << endl;

    return 0;
}
