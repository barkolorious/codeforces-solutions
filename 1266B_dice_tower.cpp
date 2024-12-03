#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  for(int i = 0; i < t; i++){
    long long x; cin >> x;
    if(x % 14 <= 6 && x % 14 > 0 && x > 14) cout << "YES\n";
    else cout << "NO\n";
  }
}