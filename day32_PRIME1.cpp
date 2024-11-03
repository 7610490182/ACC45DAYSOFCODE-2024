#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;

	cin>>t;

	while(t--)
	{
	    int a,b,count;
	    cin>>a>>b;
	    for(int i=a;i<=b;i++)
	    {
	        count=0;
	        for(int j=2;j<=sqrt(i);j++)
	        {
	            if(i%j==0){
	                count=1;
	                break;
	            }
	        }
	        if(count==0 && i!=1) cout<<i<<endl;
	    }
	}
	return 0;

}
