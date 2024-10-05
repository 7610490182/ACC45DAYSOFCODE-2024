#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        int count = 0;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                count++;
            }
        }

        if (count <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
