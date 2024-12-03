#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k; cin >> n >> k;
  int d[n];
  for(int& d_i : d) cin >> d_i;
  int ans = 0;
  int remainder_freq[k]{};
  for(int i = 0; i < n; i++){
    if(remainder_freq[d[i] % k]){
      ans++;
      remainder_freq[d[i] % k]--;
      continue;
    }
    remainder_freq[(k - (d[i] % k)) % k]++;
  }
  cout << 2 * ans << endl;
  
  return 0;
}