#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t,w,x,y,z;
	cin>>t;
	while(t--){
	    cin>>w>>x>>y>>z;
	    (z==w||y==w||x==w||x+y==w||z+y==w||x+z==w||x+y+z==w)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	}
	return 0;
}
