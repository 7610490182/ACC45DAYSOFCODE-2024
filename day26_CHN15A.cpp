#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;

	cin>> t ;

	while(t--)
	{
	    int x,j,y,sum,ome=0;
	    cin >> x>>y;
	    int ara[x] ;
	    for (j=0;j<x;j++)
	    {
	        cin >> ara[j];
	        sum = ara[j] + y ;
	        if (sum%7==0)
	        {
	            ome++;
	        }
	    }
	    cout <<""<<ome<<endl;
	}
	return 0;
}
