// barkolorious - 16 October 2024
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
int n, p[N], x, y, a, b, k, LCM;

int gcd (int u, int v) {
  if (!v) return u;
  return gcd(v, u % v);
}

bool check (int count) {
  int lcm_count = count / LCM;
  int x_count = (count / a) - lcm_count;
  int y_count = (count / b) - lcm_count;
  int res1 = 0, res2 = 0; // res1 -> x'e büyükleri ver res2 -> y'ye büyükleri ver
  for (int i = 0; i < lcm_count; i++) {
    res1 += (p[i] / 100) * (x + y);
    res2 += (p[i] / 100) * (x + y);
  }
  for (int i = lcm_count; i < lcm_count + x_count; i++) {
    res1 += (p[i] / 100) * x;
  }
  for (int i = lcm_count + x_count; i < lcm_count + x_count + y_count; i++) {
    res1 += (p[i] / 100) * y;
  }
  for (int i = lcm_count; i < lcm_count + y_count; i++) {
    res2 += (p[i] / 100) * y;
  }
  for (int i = lcm_count + y_count; i < lcm_count + y_count + x_count; i++) {
    res2 += (p[i] / 100) * x;
  }
  // cout << res1 << " " << res2 << endl;
  return (res1 >= k) || (res2 >= k);
}

void solve () {
  int q; cin >> q;
  while (q--) {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> p[i];
    cin >> x >> a >> y >> b >> k;

    // precalc
    sort (p, p + n, greater<int>());
    LCM = (a * b) / gcd(a, b);

    // check(6);
    int l = 0, r = n;
    while (l < r) {
      int m = (l + r) / 2;
      if (check(m)) r = m;
      else l = m + 1;
    }
    if (check(l)) cout << l << endl;
    else cout << -1 << endl;
  }
}

/*
-- Sample 1 --
Input:
4
1
100
50 1
49 1
100
8
100 200 100 200 100 200 100 100
10 2
15 3
107
3
1000000000 1000000000 1000000000
50 1
50 1
3000000000
5
200 100 100 100 100
69 5
31 2
90
Output:

*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1223C_save_the_nature.cpp" -o _run
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