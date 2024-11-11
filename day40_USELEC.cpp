#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;

    cin >> t;

    while (t--) {
        int n, x, won = 0;
        cin >> n >> x;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        vector < int > v;
        int c = 0;
        for (int i = 0; i < n; i = i + 1) {
            if (a[i] > b[i])
                c++;
            else
                v.push_back(b[i] - a[i] + 1);
        }
        sort(v.begin(), v.end());
        int need = (n / 2) + 1;
        for (int i = 0; i < n; i = i + 1) {
            if (c >= need)
                break;
            if (x >= v[i]) {
                x -= v[i];
                c++;
            }
            else
                break;
        }
        if (c >= need)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
