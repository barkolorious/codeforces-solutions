#include <bits/stdc++.h>
using namespace std;

#define FIN(x) freopen((string(x) + ".in").c_str(), "r", stdin)
#define FOUT(x) freopen((string(x) + ".out").c_str(), "w", stdout)
#define int long long
#define pb  push_back
#define fr  first
#define sc  second

const int N = 1e5 + 5;
int queries[N], diff[N], arr[N];

void solve () {
  int n, m, k; cin >> n >> m >> k;
  for (int i = 1; i <= n; i++) cin >> arr[i];
  vector<tuple<int, int, int>> operations(m + 1);

  for (int mi = 1; mi <= m; mi++) {
    int l, r, d; cin >> l >> r >> d;
    operations[mi] = {l, r + 1, d};
  }

  for (int ki = 0; ki < k; ki++) {
    int x, y; cin >> x >> y;
    queries[x]++, queries[y + 1]--;
  }

  int curr = 0;
  for (int mi = 1; mi <= m; mi++) {
    curr += queries[mi];
    diff[get<0>(operations[mi])] += curr * get<2>(operations[mi]);
    diff[get<1>(operations[mi])] -= curr * get<2>(operations[mi]);
  }

  curr = 0;
  for (int ni = 1; ni <= n; ni++) {
    curr += diff[ni];
    cout << arr[ni] + curr << " \n"[ni == n];
  }
}

/*
-- Sample 1 --
Input:
3 3 3
1 2 3
1 2 1
1 3 2
2 3 4
1 2
1 3
2 3
Output:
9 18 17

-- Sample 2 --
Input:
1 1 1
1
1 1 1
1 1
Output:
2

-- Sample 3 --
Input:
4 3 6
1 2 3 4
1 2 1
2 3 2
3 4 4
1 2
1 3
2 3
1 2
1 3
2 3
Output:
5 18 31 20
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
  #endif

  solve();

  #ifdef LOCAL
    fclose(__FILE_IN__);
    fclose(__FILE_OUT__);

    cerr << "Executed in: " << (double) (clock() - __START__) / CLOCKS_PER_SEC << "seconds" << endl;
  #endif

  return 0;
}