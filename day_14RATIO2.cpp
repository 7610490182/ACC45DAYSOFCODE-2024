#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;

	cin>>t;

	while(t--){
	    int x,y;
	    cin>>x>>y;
	    float cnt=0;
	    if(x<2*y && y<2*x){
	        float X=(2.0*x-y)/2.0;
	        float Y=(2.0*y-x)/2.0;
	        X=ceil(X);
	        Y=ceil(Y);
	        cnt=min(X,Y);
	    }
	    cout<<cnt<<endl;
	}


}
