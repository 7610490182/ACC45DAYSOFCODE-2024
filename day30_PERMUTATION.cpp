#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int c = n;
        // if(a[n-1]>c){
        //     cout<<-1<<endl;
        // }
        int count = 0, flag = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] > c)
            {
                flag = 1;
            }
            else if (a[i] < c)
            {
                count += c - a[i];
            }
            c = c - 1;
        }
        if (flag == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
    return 0;
}
