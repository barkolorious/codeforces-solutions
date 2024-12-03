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
  int n, k;
  cin >> n >> k;
  vector<int> fence(n);
  for(int i = 0; i < n; i++) cin >> fence[i];
  
  int ans, minSum = INT_MAX;
  if(k == n) ans = 1;
  if(k == n - 1) ans = ((fence[0] < fence[n - 1]) ? 1 : 2);
  else{
    vector <int> dp(n - k + 1);
    dp[0] = 0;
    for(int i = 0; i < k; i++) dp[0] += fence[i];
    for(int i = 1; i < dp.size(); i++){
      dp[i] = dp[i - 1] - fence[i - 1] + fence[i + k - 1]; 
    }
    for(int i = 0; i < dp.size(); i++){
      if(dp[i] < minSum){
        ans = i + 1; 
        minSum = dp[i];
      }
    }
  }

  cout << ans;
  
  return 0;
}
