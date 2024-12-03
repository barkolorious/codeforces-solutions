#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;

int main(){
  string s;
  cin >> s;
  vector<int> dp(s.length());
  for(int i = 0; i < s.length(); i++) dp[i] = 0;
  for(int i = 1; i < s.length(); i++)
    dp[i] = dp[i - 1] + (s[i - 1] == s[i]);

  int n;
  cin >> n;
  for(int i = 0; i < n; i++){
    int l, r;
    cin >> l >> r; l--; r--;
    cout << dp[r] - dp[l] << endl;
  }
  
  
  return 0;
}