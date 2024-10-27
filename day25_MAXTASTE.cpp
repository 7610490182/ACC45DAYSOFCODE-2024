#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,m1,m2;
	    cin>>a>>b>>c>>d;
	    m1=max(a,b);
	    m2=max(c,d);
	    cout<<m1+m2<<endl;
	    
	}
	return 0;
}

