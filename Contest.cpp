#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        long long y = -1; // Default value if no valid y is found

        for (long long i = x; i > 0; i--) { // Check all possible y values
            if ((x ^ i) > x) {
                y = i;
                break; // We just need any one valid y
            }
        }

        cout << y << endl;
    }

    return 0;
}
