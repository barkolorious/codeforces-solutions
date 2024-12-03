// staring at a claustrophobic horizon
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x, y; cin >> n >> x >> y;
  int a[n];
  for(int& ai : a) cin >> ai;
  for(int i = 0; i < n; i++){
    bool flag = true;
    for(int j = max(0, i - x); j < i; j++){
      if(a[j] <= a[i]) {flag = false; break;}
    }
    if(!flag) continue;
    for(int j = min(i + y, n - 1); j > i; j--){
      if(a[j] <= a[i]) {flag = false; break;}
    }
    if(flag){
      cout << i + 1;
      break;
    }
  }
}