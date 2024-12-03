#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(!b) return a;
  return gcd(b, a % b);
}

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];
    int total_gcd;
    for(int i = 0; i < n; i++){
      cin >> a[i];
      if(i) total_gcd = gcd(total_gcd, a[i]);
      else total_gcd = a[i];
    }
    if(total_gcd == 1) cout << 0 << endl;
    else{
      bool flag = false; int ans = 0;
      for(int i = n - 1; i >= 0; i--){
        if(gcd(total_gcd, gcd(a[i], i + 1)) == 1){
          ans += n - i; flag = true;
          break;
        }
      }
      if(!flag || ans > 3){
        ans = 3;
      }
      cout << ans << endl;
    }
  }
  
}