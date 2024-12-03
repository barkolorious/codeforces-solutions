// barkolorious - 25 October 2024
// in god, do we trust? 
#include <bits/stdc++.h>
using namespace std;

#define FIN(x) freopen(x ".in", "r", stdin)
#define FOUT(x) freopen(x ".out", "w", stdout)
#define int long long
#define pb  push_back
#define fr  first
#define sc  second
#define __  << " " << 

const int N = 2e5 + 5;
int n, k;

int pwr (int x, int y) {
  int res = 1;
  while (y) {
    if (y & 1) res *= x;
    x *= x;
    y >>= 1;
  }
  return res;
}

int simplify (int a) {
  int res = 1;
  for (int p = 2; p * p <= a; p++) {
    int ei = 0;
    while (a % p == 0) { a /= p; ei++; }
    res *= pwr(p, ei % k);
  }
  if (a > 1) res *= a;
  return res;
} 

int inverse (int a) {
  int res = 1;
  for (int p = 2; p * p <= a; p++) {
    int ei = 0;
    while (a % p == 0) { a /= p; ei++; }
    res *= pwr(p, (-(ei % k) + k) % k);
  }
  if (a > 1) res *= pwr(a, k - 1);
  return res;
} 

void solve () {
  cin >> n >> k;
  map<int, int> freq;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a; cin >> a;
    ans += freq[simplify(a)];
    freq[inverse(a)]++;
    // cout << a __ simplify(a) __ inverse(a) << endl;
  }
  cout << ans << endl;
}

/*
-- Sample 1 --
Input:
6 3
1 3 9 8 24 1
Output:
5
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1225D_power_products.cpp" -o _run
*/

int32_t main () {
  #ifndef LOCAL
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  #endif

  #ifdef LOCAL
    clock_t __START__ = clock();
    FILE* __FILE_IN__ = FIN("C:/Users/LENOVO/Desktop/BARKIN/Genel/Programming/Competitive/_run");
    FILE* __FILE_OUT__ = FOUT("C:/Users/LENOVO/Desktop/BARKIN/Genel/Programming/Competitive/_run");
  #else
    #ifndef ONLINE_JUDGE
      FILE* __FILE_IN__ = FIN("usaco");
      FILE* __FILE_OUT__ = FOUT("usaco");
    #endif
  #endif

  solve();

  #ifdef LOCAL
    fclose(__FILE_IN__);
    fclose(__FILE_OUT__);
    cerr << "Executed in: " << fixed << setprecision(3) << (double) (clock() - __START__) / CLOCKS_PER_SEC << "seconds" << endl;
  #else
    #ifndef ONLINE_JUDGE
      fclose(__FILE_IN__);
      fclose(__FILE_OUT__);
    #endif
  #endif

  return 0;
}