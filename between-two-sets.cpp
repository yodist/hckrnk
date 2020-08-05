#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m, x, min = -1, total = 0;
    cin >> n >> m;
    vector<int> a, b;
    for (int i = 0; i < n; i++) {
        cin >> x;
        a.push_back(x);
    }

    for (int i = 0; i < m; i++) {
        cin >> x;
        if (min == -1) {
            min = x;
        }
        if (x < min) {
            min = x;
        }
        b.push_back(x);
    }

    int ans = a[0];
    for (int i = 1; i < n; i++) {
        ans = a[i] * ans / __gcd(a[i], ans);
    }

    int dec = ans;
    while (dec <= min) {
        bool flag = true;
        for (int i = 0; i < m; i++) {
            if (b[i]%dec!=0) flag = false; 
        }
        if (flag)
            total += 1;
        dec += ans;
    }

    cout << total << endl;

    return 0;
}
