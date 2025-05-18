#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    if ((x < y && x < z && z < y) || (x > y && y < z && z < x)){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }

    return 0;
}