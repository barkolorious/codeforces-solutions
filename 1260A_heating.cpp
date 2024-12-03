#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  for(int room = 0; room < n; room++){
    long long c, sum; cin >> c >> sum;
    if(c >= sum){
      cout << sum << endl;
    } else {
      long long common = sum / c;
      long long left = sum - common * c;
      long long ans = left * (common + 1) * (common + 1);
      ans += (c - left) * common * common;
      cout << ans << endl;
    }
  }
}