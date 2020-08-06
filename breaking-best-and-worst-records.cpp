#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, max, min, a = 0, b = 0, x;
    cin >> n;
    cin >> x;
    max = min = x;
    for (int i = 1; i < n; i++) {
        cin >> x;
        if (x > max) {
            max = x;
            a += 1;
        }
        if (x < min) {
            min = x;
            b += 1;
        }
    }

    cout << a << " " << b << endl;
    return 0;
}
