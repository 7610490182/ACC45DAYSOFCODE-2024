#include <iostream>
#include<map>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
//	for(int i=0;i<t;i++)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    map<int,int>pk;
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[j];
	        pk[a[j]]++;
	    }
	    int ans=0;
	 //    int freq=0;
	    for(int j=0; j<n; j++)
	    {
	        if(pk[a[j]] > ans)
	        ans = pk[a[j]];
	    }
	    cout<< (n-ans)<<endl;
	}
	return 0;
}

