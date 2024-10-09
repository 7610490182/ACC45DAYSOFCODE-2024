#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int t;

	cin >> t;

	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    string str;
	    cin >> str;
	    
	    int ig=0;
	    int fg=0;
	    for(int i=0; i<n; i++)
	    {
	        if(str[i]=='I')
	        {
	            ig=1;
	            break;
	        }
	        else if(str[i]=='Y')
	        {
	            fg=1;
	            break;
	        }
	    }
	    if(ig)
	    {
	        cout << "INDIAN" << endl;
	    }
	    else if(fg)
	    {
	        cout << "NOT INDIAN" << endl;
	    }
	    else
	    {
	        cout << "NOT SURE" << endl;
	    }
	}
	return 0;
}
