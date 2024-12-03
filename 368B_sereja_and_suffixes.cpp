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
  int n, m;
  cin >> n >> m;
  unordered_set<int> nums;
  vector<int> dp(n);
  vector<int> a(n);
  for(int i = 0; i < n; i++) cin >> a[i];

  dp[n - 1] = 1; nums.insert(a[n - 1]);
  for(int i = n - 2; i >= 0; i--){
    if(nums.find(a[i]) == nums.end()){
      nums.insert(a[i]);
      dp[i] = dp[i + 1] + 1;
    }else
      dp[i] = dp[i + 1];
  }

  for(int i = 0; i < m; i++){
    int l; cin >> l; l--;
    cout << dp[l] << endl;
  }
  
  return 0;
}
