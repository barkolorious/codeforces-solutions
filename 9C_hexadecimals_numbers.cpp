#include <bits/stdc++.h>
#define llong long long
using namespace std;

llong binary_to_decimal(llong x){
  llong power = 1, ans = 0;
  for(llong i = 0; i < 10; i++){
    if(x & (1 << i)) ans += power;
    power *= 10;
  }
  return ans;
}

int main(){
  llong n; cin >> n;
  llong ans = 0;
  vector<llong> nums;
  for(llong i = 1; i < (1 << 10); i++) nums.push_back(binary_to_decimal(i));

  for(llong num : nums){
    if(num <= n) ans++;
    else break;
  }

  cout << ans << endl;
  
  return 0;
}