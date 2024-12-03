#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int a[n]; int sum = 0;
  for(int& a_i : a){
    cin >> a_i; sum += a_i;
  }
  int curr = 0, ans = 0;
  for(int i = 0; i < n - 1; i++){
    curr += a[i];
    if(sum - curr == curr){
      ans++;
    }
  }

  cout << ans << endl;
  
  return 0;
}