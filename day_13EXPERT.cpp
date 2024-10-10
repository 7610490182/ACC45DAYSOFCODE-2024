#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main() {
	int t;
	cin >> t;
	while(t--)
	{
	    float x, y;
	    cin >> x >> y;
	    if(y >= (x/2.0))
	    {
	        cout << "YES\n";
	    }
	    else
	    {
	        cout << "NO\n";
	    }
	}
	return 0;
}
