#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, k; cin >> n >> k;
    vector<int> a(n); set<int> distinct_nums;
    for(int& a_i : a){
      cin >> a_i;
      distinct_nums.insert(a_i);
    }
    if(k >= distinct_nums.size()){
      cout << 1 << endl;
      continue;
    }
    int ans = -1;
    vector<int> prev_a(a);
    vector<int> zeros(n, 0);
    do{
      prev_a = a;
      int curr_k = 1, last = a[0]; a[0] = 0;
      for(int i = 1; i < n; i++){
        if(a[i] != prev_a[i - 1]) curr_k++;
        if(curr_k <= k){
          last = a[i];
          a[i] -= a[i];
        } else{
          a[i] -= last;
        }
      }
      ans++;
    } while(prev_a != a);
    if(ans && a == zeros) cout << ans << endl;
    else cout << -1 << endl;
  }
  
  return 0;
}