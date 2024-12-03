// barkolorious - 13 October 2024
// 
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
    int h, c, t;
    cin >> h >> c >> t;
    int l = 0, r = 1e6;
    while (l < r) {
      int m1 = (l + r) / 2; // m1 tane h
      double t1 = ((m1 - 1.0) * (h + c) + h) / (2.0 * m1 - 1);
      int m2 = m1 + 1;
      double t2 = ((m2 - 1.0) * (h + c) + h) / (2.0 * m2 - 1);
      if (abs(t1 - t) < abs(t2 - t)) r = m1;
      else l = m2;
    }
    double t1 = ((l - 1.0) * (h + c) + h) / (2.0 * l - 1);
    double t2 = (((l - 1) - 1.0) * (h + c) + h) / (2.0 * (l - 1) - 1);
    if (abs(t - (h + c) / 2.0) <= abs(t1 - t)) cout << 2 << endl;
    else if (abs(t2 - t) <= abs(t1 - t)) cout << 2 * (l - 1) - 1 << endl;
    else cout << 2 * l - 1 << endl;
  }
}

/*
-- Sample 1 --
Input:
3
30 10 20
41 15 30
18 13 18
Output:
2
7
1
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1359C_mixing_water.cpp" -o _run
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