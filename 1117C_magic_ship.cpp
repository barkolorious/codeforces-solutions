// barkolorious - 29 September 2024
#include <bits/stdc++.h>
using namespace std;

#define FIN(x) freopen(x ".in", "r", stdin)
#define FOUT(x) freopen(x ".out", "w", stdout)
#define int long long
#define pb  push_back
#define fr  first
#define sc  second

const int N = 2e5 + 5;
pair<int, int> S, E;
int n;
pair<int, int> wind[N];

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1117C_magic_ship.cpp" -o _run
*/

bool check (int x) {
  pair<int, int> w = {(x / n) * wind[n].fr + wind[x % n].fr,
                      (x / n) * wind[n].sc + wind[x % n].sc};
  
  pair<int, int> t1 = {S.fr + w.fr, S.sc + w.sc};

  return (abs(E.fr - t1.fr) + abs(E.sc - t1.sc)) <= x;
}

void solve () {
  cin >> S.fr >> S.sc >> E.fr >> E.sc >> n;
  wind[0] = {0, 0};
  for (int i = 1; i <= n; i++) {
    char c; cin >> c;
    switch (c) {
      case 'U':
        wind[i] = {wind[i - 1].fr, wind[i - 1].sc + 1};
        break;
      case 'D':
        wind[i] = {wind[i - 1].fr, wind[i - 1].sc - 1};
        break;
      case 'R':
        wind[i] = {wind[i - 1].fr + 1, wind[i - 1].sc};
        break;
      case 'L':
        wind[i] = {wind[i - 1].fr - 1, wind[i - 1].sc};
        break;
    }
  }

  int l = 1, r = 1e18;

  while (l < r) {
    int m = (l + r) / 2;
    if (check(m)) r = m;
    else l = m + 1;
  }

  if (check(l)) cout << l << endl;
  else cout << -1 << endl;
}

/*
-- Sample 1 --
Input:
0 0
4 6
3
UUU
Output:
5

-- Sample 2 --
Input:
0 3
0 0
3
UDD
Output:
3

-- Sample 2 --
Input:
0 0
0 1
1
L
Output:
-1
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