#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;

	cin>>t;

	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int count=0,f=0;
	    for(int i=2;i<=a;i*=2)
	    {
	        count++;
	    }
	    f=count*b+((count-1)*c);
	    cout<<f<<endl;
	}
	return 0;
}
