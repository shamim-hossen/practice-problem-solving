#include<bits/stdc++.h>
using namespace std;

int main(){
    int y, m, d, n;
    cin >> n;

    y = n / 365;
    m = (n % 365) / 30;
    d = (n % 365) % 30;

    cout << y << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;
    return 0;
}