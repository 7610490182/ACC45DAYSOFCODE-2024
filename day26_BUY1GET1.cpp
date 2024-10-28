#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
  int t;

    cin>>t;

    while(t--){
        string s;
        cin>>s;
        unordered_map<char , int> umap;
        for(int i = 0 ; i < s.length() ; i++){
            umap[s[i]]++;
        }
        int cost = 0;
        for(auto x : umap){
            if(x.second%2 == 0){
                cost += (x.second / 2);
            }
            else{
                cost += (x.second + 1) / 2;
            }
        }
        cout<<cost<<endl;
    }
}
