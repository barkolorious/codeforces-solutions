// barkolorious - 26 October 2024
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

void solve () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int valley[n][n];
    for (int y = 0; y < n; y++) {
      for (int x = 0; x < n; x++) {
        cin >> valley[x][y];
      }
    }
    int ans = 0;
    for (int i = -n; i <= n; i++) {
      int mini = 0;
      for (int x = 0; x < n; x++) {
        int y = x - i;
        if (y < 0 || y >= n) continue;
        mini = min(mini, valley[x][y]);
      }
      ans += -mini;
    }
    cout << ans << endl;
  }
}

/*
-- Sample 1 --
Input:
4
1
1
2
-1 2
3 0
3
1 2 3
-2 1 -1
0 0 -1
5
1 1 -1 -1 3
-3 1 4 4 -4
-1 -1 3 0 -5
4 5 3 -3 -1
3 1 -3 -1 5
Output:
0
1
4
19
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\2033B_sakurako_and_water.cpp" -o _run
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