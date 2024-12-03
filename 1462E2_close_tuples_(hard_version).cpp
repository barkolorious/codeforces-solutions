// barkolorious - 20 November 2024
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
const int mod = 1e9 + 7;
int fac[N], inv[N];

void ext (int a, int b, int& x, int& y) {
  if (!b) { x = 1, y = 0; return; }
  ext(b, a % b, x, y);
  int xx = y, yy = x - (a / b) * y;
  x = xx, y = yy;
}

int inverse (int a) {
  int x = 0, y = 0;
  ext(a, mod, x, y);
  return (x + mod) % mod;
}

void precalc () {
  fac[0] = 1;
  for (int i = 1; i < N; i++) fac[i] = fac[i - 1] * i % mod;
  inv[N - 1] = inverse(fac[N - 1]);
  for (int i = N - 2; i >= 0; i--) inv[i] = inv[i + 1] * (i + 1) % mod;
}

int comb (int n, int k) {
  if (n < k) return 0;
  int res = fac[n] * inv[k] % mod * inv[n - k] % mod;
  return res;
}

void solve () {
  precalc();
  int t; cin >> t;
  while (t--) {
    int n, m, k; cin >> n >> m >> k;
    int a[n];
    map<int, int> freq;

    for (int i = 0; i < n; i++) {
      cin >> a[i]; freq[a[i]]++;
    }

    auto l = freq.begin(), r = freq.begin();
    int sz = 0, ans = 0;
    while (l != freq.end()) {
      while (r != freq.end() && r->fr - l->fr <= k) { sz += r->sc; r++; }
      ans = (((ans + comb(sz, m)) % mod) - comb(sz - l->sc, m) + mod) % mod;
      sz -= l->sc;
      l++;
    }
    cout << ans << endl;
  }
}

/*
-- Sample 1 --
Input:
4
4 3 2
1 2 4 3
4 2 1
1 1 1 1
1 1 1
1
10 4 3
5 6 1 3 2 9 8 1 2 4
Output:
2
6
1
20
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1462E2_close_tuples_(hard_version).cpp" -o _run
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