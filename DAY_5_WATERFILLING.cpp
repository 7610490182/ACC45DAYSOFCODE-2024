#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int a,b,c;
	    cin >> a >> b >> c;
	    if((a == 0) && (b == 0)){
	        cout << "Water Filling Time" << endl;
	    }
	    else if((b == 0) && (c == 0)){
	        cout << "Water Filling Time" << endl;
	    }
	    else if((c == 0) && (a == 0)){
	        cout << "Water Filling Time" << endl;
	    }
	    else{
	        cout << "Not Now" << endl;
	    }
	}
}
