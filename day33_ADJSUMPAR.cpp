#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;

	cin>>t;

	while(t--){
	    int n,sum=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	    cin>>arr[i];
	    sum +=arr[i];
	}
	if(sum%2==0){
	    cout<<"yes"<<endl;
	}
	else
	cout<<"no"<<endl;
	}
	return 0;
}
