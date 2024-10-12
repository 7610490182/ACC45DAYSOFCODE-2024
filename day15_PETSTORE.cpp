#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int c = 0;
        for(int i=0;i<n;i=i+2){
            if(arr[i] != arr[i+1]){
                c = 1;
                break;
            }
        }
        if(c)
        cout<<"No\n";
        else
        cout<<"Yes\n";
    }
	// your code goes here
	return 0;
}
