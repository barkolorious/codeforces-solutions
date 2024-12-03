#include <bits/stdc++.h>
#define llong long long
using namespace std;

llong gcd(llong a, llong b){
  if(b) return gcd(b, a % b);
  else return a;
}

int main(){
  llong n, m, q; cin >> n >> m >> q;
  llong div = gcd(n, m);  
  while(q--){
    llong s_x, s_y, e_x, e_y;
    cin >> s_x >> s_y >> e_x >> e_y;
    s_y--; e_y--;
    llong s_part = (s_x == 1) ? s_y / (n / div) : s_y / (m / div);
    llong e_part = (e_x == 1) ? e_y / (n / div) : e_y / (m / div);
    if(s_part == e_part) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}