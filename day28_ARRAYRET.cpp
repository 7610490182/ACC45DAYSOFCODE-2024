#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        long long b[n];
        
        long long sumB = 0, sumA = 0;
        
        for(int i=0; i<n; i++){
            cin >> b[i];
            sumB += b[i];
        }
        sumA = sumB / (n+1);
        for(int i=0; i<n; i++){
            cout << b[i] - sumA << " ";
        }
        cout << endl;
    } 
}
