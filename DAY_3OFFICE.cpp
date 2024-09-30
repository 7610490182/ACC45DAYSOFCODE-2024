#include <bits/stdc++.h>
#define ll long long int
#define all(x) x.begin(),x.end()
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);  cout.tie(NULL);  
#define w(t) int t; cin>>t; while(t--)
#define ld long double
#define ones(x) __builtin_popcountll(x)
#define mod 1000000007
using namespace std;
//  ******************** BINARY EXPONENTIATION  **************************//
  ll binpow(ll b, ll p){
	ll res=1;
	while(p){
		if(p&1)res=(res*b)%mod;
		b=(b*b)%mod;
		p=p/2;
	} 
	return res;
}
  // ******************** GCD COMPUTATION  ****************************//
 int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
 //   ****************  NCR COMPUTATION  **********************************
  ll ncr(ll n, ll r) {
       if(n<r) return 0;
       if(r==0) return 1;
        ll fact[n+1];
        fact[0]=1;
        for(int i=1; i<=n; i++)  fact[i]=(fact[i-1]*i)%mod;
 return (fact[n]*binpow(fact[n-r],mod-2)%mod*binpow(fact[r],mod-2)%mod)%mod;
  }
  
  // Ceil FUNCTION
  
  ll _ceil(ll a,ll b) {
      return (a%b==0 ? a/b : (a/b) + 1 );
  }
 // *******************  SOLUTION FUNCTION *************************//
 void solve() {
     int x,y; cin>>x>>y;
      cout<<(x*4)+y<<"\n";
  }
 
  // ******************   MAIN FUNCTION    ***************************//

int main() {
	 fio;
	 w(t) {
	      solve();
	 }
	return 0;
}