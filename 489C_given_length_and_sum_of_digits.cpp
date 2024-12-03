#include <bits/stdc++.h>
using namespace std;

long long pwr(long long x){
  if(x == 0) return 1;
  else return 10 * pwr(x - 1);
}

int main(){
  int m, s;
  cin >> m >> s;
  string mn, mx;

  if (s == 0){
    cout << (m == 1 ? "0 0" : "-1 -1") << endl;
    return 0;
  }

  for (int i = 0; i < m; i++){
    int t = min(s, 9);
    mx += t + '0';
    s -= t;
  }

  if (s > 0){
    cout << "-1 -1" << endl;
    return 0;
  }

  for (int i = m - 1; i >= 0; i--) mn += mx[i];

  int idx;
  for (idx = 0; mn[idx] == '0'; idx++);
  mn[idx]--, mn[0]++;

  cout << mn << " " << mx << endl;
  return 0;

}