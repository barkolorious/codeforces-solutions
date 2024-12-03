// barkolorious - 18 November 2024
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

int pwr (int x, int y) {
  int res = 1;
  while (y) {
    if (y & 1) res *= x;
    x *= x;
    y >>= 1;
  }
  return res;
}

void solve () {
  int n; cin >> n;
  map<int, map<int, int>> freq;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    for (int p = 2; p * p <= x; p++) {
      int r = 0;
      while (x % p == 0) {
        r++; x /= p;
        freq[p][r]++;
      }
    }
    if (x > 1) freq[x][1]++;
  }
  int ans = 1;
  for (auto prime : freq) {
    int r = 0;
    for (auto power : prime.second) 
      if (power.second >= n - 1) r = power.first;
    ans *= pwr(prime.first, r);
  }
  cout << ans << endl;
}

/*
-- Sample 1 --
Input:
2
1 1
Output:
1

-- Sample 2 --
Input:
4
10 24 40 80
Output:
40

-- Sample 3 --
Input:
10
540 648 810 648 720 540 594 864 972 648
Output:
54
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1349A_orac_and_lcm.cpp" -o _run
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