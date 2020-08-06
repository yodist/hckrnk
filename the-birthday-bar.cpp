#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, d, m, c = 0;
    vector<int> s;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.push_back(x);
    }
    cin >> d >> m;
    for (int i = 0; i <= n - m; i++) {
        int total = 0;
        for (int j = 0; j < m; j++) {
            total += s[i+j];
        }
        if (total == d) c += 1;
    }
    cout << c << endl;
    return 0;
}
