// barkolorious - 28 September 2024
#include <bits/stdc++.h>
using namespace std;

#define FIN(x) freopen(x ".in", "r", stdin)
#define FOUT(x) freopen(x ".out", "w", stdout)
#define int long long
#define pb  push_back
#define fr  first
#define sc  second

const int N = 2e5 + 5;
int a[N], n, k;

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1201C_maximum_median.cpp" -o _run
*/

int check (int x) {
  int res = 0;
  for (int i = n / 2; i < n; i++) res += max(0LL, x - a[i]);
  return res;
}

int binary_search (int l, int r) {
  while (l < r) {
    int m = (r + l + 1) / 2;
    if (check(m) <= k) l = m;
    else r = m - 1;
  }
  return l;
}

void solve () {
  cin >> n >> k;
  for (int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  cout << binary_search(0, 2e9) << endl;
}

/*
-- Sample 1 --
Input:
3 2
1 3 5
Output:
5

-- Sample 2 --
Input:
5 5
1 2 1 1 1
Output:
3

-- Sample 3 --
Input:
7 7
4 1 2 4 3 4 4
Output:
5
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