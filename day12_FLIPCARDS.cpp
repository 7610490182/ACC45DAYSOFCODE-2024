#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;

	cin>>t;

	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    cout<<min(n-x,x)<<endl;
	}
	return 0;
}
