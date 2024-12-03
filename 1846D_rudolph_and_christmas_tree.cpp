#include <bits/stdc++.h>
using namespace std;

#define FIN(x) freopen((string(x) + ".in").c_str(), "r", stdin)
#define FOUT(x) freopen((string(x) + ".out").c_str(), "w", stdout)
#define int   long long
#define pb    push_back
#define fr    first
#define sc    second
#define sq(x) pow(x, 2)

const int N = 2e5 + 5;

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "1846D_rudolph_and_christmas_tree.cpp" -o _run
g++ -std=c++17 -O2 -Wall -DUSACO "1846D_rudolph_and_christmas_tree.cpp" -o _run
*/

void solve () {
  int t; cin >> t;
  while (t--) {
    int n; double d, h;
    cin >> n >> d >> h;
    double y[n + 1];
    y[n] = 1e15;
    for (int i = 0; i < n; i++) cin >> y[i];
    
    double ans = 0;
    for (int i = 0; i < n; i++) {
      ans += h * d / 2;
      if (y[i + 1] - y[i] < h) {
        int a = h - (y[i + 1] - y[i]);
        ans -= (d * a * a) / (2 * h);
      }
    }
    cout << fixed << setprecision(6) << ans << endl;
  }
}

/*
-- Sample 1 --
Input:
5
3 4 2
1 4 5
1 5 1
3
4 6 6
1 2 3 4
2 1 200000
1 200000
2 4 3
9 11
Output:
11
2.5
34.5
199999.9999975
11.333333
*/

int32_t main () {
  #ifndef LOCAL
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  #endif

  #ifdef LOCAL
    clock_t __START__ = clock();

    FILE* __FILE_IN__ = FIN("_run");
    FILE* __FILE_OUT__ = FOUT("_run");
  #elif USACO
    FILE* __FILE_IN__ = FIN("wormsort");
    FILE* __FILE_OUT__ = FOUT("wormsort");
  #endif

  solve();

  #ifdef LOCAL
    fclose(__FILE_IN__);
    fclose(__FILE_OUT__);

    cerr << "Executed in: " << (double) (clock() - __START__) / CLOCKS_PER_SEC << "seconds" << endl;
  #elif USACO
    fclose(__FILE_IN__);
    fclose(__FILE_OUT__);
  #endif

  return 0;
}