#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    long long a[n];
    for(long long& ai : a) cin >> ai;
    sort(a, a + n);
    long long last = 1, ans = 0;
    if(a[0] != 1){
      ans += a[0] - 1; a[0] = 1;
    }
    for(int i = 0; i < n; i++){
      if(a[i] == last) continue;
      if(a[i] == last+1 && i){
        last++; continue;
      }
      last++;
      ans += a[i] - last;
    }
    cout << ans << endl;
  }
}