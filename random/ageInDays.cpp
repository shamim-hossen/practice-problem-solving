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

/**
#include <iostream>
using namespace std;

int main() {
    int n, years, months, days;
    cin >> n;

    years = n / 365;
    n %= 365;  // Update 'n' to the remaining days after calculating years

    months = n / 30;
    days = n % 30;  // Remaining days after calculating months

    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;

    return 0;
}
 */