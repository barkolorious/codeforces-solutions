#include <bits/stdc++.h>
using namespace std;

#define FIN(x) freopen((string(x) + ".in").c_str(), "r", stdin)
#define FOUT(x) freopen((string(x) + ".out").c_str(), "w", stdout)
#define int long long
#define pb  push_back
#define fr  first
#define sc  second

const int N = 2e5 + 5;

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "1914C_quests.cpp" -o _run
g++ -std=c++17 -O2 -Wall -DUSACO "1914C_quests.cpp" -o _run
*/

void solve () {
  int t; cin >> t;
  while (t--) {
    int n, k; cin >> n >> k;
    int a[n], b[n], pre_a[n], pre_b[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    pre_a[0] = a[0]; pre_b[0] = b[0];
    for (int i = 1; i < n; i++) {
      pre_a[i] = a[i] + pre_a[i - 1];
      pre_b[i] = max(b[i], pre_b[i - 1]);
    }

    int ans = 0;

    for (int i = 0; i < n && i < k; i++) {
      ans = max(ans, pre_a[i] + pre_b[i] * (k - i - 1));
    }

    cout << ans << endl;
  }
}

/*
-- Sample 1 --
Input:
4
4 7
4 3 1 2
1 1 1 1
3 2
1 2 5
3 1 8
5 5
3 2 4 1 4
2 3 1 4 7
6 4
1 4 5 4 5 10
1 5 1 2 5 1
Output:
13
4
15
15
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