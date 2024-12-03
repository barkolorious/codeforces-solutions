#include <bits/stdc++.h>
#define llong long long
using namespace std;

int main(){
  llong n, k; cin >> n >> k;
  llong a[n];
  for(llong& a_i : a) cin >> a_i;
  llong curr_max = 0, curr_len = 0;
  bool flag = false;
  for(int i = 0; i < n; i++){
    if(a[i] > curr_max){
      curr_max = a[i];
      curr_len = ((i) ? 1 : 0);
    } else curr_len++;
    if(curr_len >= k){
      flag = true;
      break;
    }
  }
  if(flag) cout << curr_max << endl;
  else cout << n << endl;
  return 0;
}