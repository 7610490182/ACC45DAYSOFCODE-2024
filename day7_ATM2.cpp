#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int n, k;
	    cin >> n >> k;
	    int arr[n];
	    for(int j = 0; j < n; j++){
	        cin >> arr[j];
	    }
	    int amount = k;
	    string result;
	    
	    for(int j = 0; j < n; j++){
	        if(k - arr[j] >= 0){
	            result.push_back('1');
	            k = k - arr[j];
	        }
	        else{
	            result.push_back('0');
	        }
	    }
	    cout << result << endl;
	}
}
