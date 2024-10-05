#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int p,q,r,s;
	    cin >> p >> q >> r >> s;
	    
	    if(p > q+r+s){
	        cout << "YES" << endl;
	    }
	    else if(q > p+r+s){
	        cout << "YES" << endl;
	    }
	    else if(r > p+q+s){
	        cout << "YES" << endl;
	    }
	    else if(s > p+q+r){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
}
