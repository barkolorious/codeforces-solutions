#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))
#define ll long long

int main(){
  vector<bool> dp(1111, false);
  for(long i = 1; i < 1111; i++){
    if(i % 11 == 0 || i % 111 == 0) dp[i] = true;
    else if(i > 11 && dp[i - 11]) dp[i] = true;
    else if(i > 111 && dp[i - 111]) dp[i] = true;
  }

  int t; cin >> t;
  while(t--){
    ll x; cin >> x;
    if(x >= 1111) cout << "YES" << endl;
    else cout << (dp[x] ? "YES" : "NO") << endl;
  }
}
