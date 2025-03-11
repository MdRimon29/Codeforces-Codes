#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int x;
        cin >> x;

        int y = 1;  // Start with 1
        while ((x & y) != 0) {  // Find first unset bit
            y <<= 1;  // Left shift to next higher bit
        }

        if (y < x) {
            cout << y << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
