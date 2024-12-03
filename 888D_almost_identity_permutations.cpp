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

int comb (int n, int k) {
  if (k > n - k) k = n - k;
  int res = 1;
  for (int i = 0; i < k; i++) {
    res = res * (n - i) / (i + 1);
  }
  return res;
}

int coef[5] = {1, 0, 1, 2, 9};

void solve () {
  int n, k; cin >> n >> k;
  int ans = 0;
  for (int i = 0; i <= k; i++) {
    ans += coef[i] * comb(n, i);
  }
  cout << ans << endl;
}

/*
-- Sample 1 --
Input:
4 1
Output:
1

-- Sample 2 --
Input:
4 2
Output:
7

-- Sample 3 --
Input:
5 3
Output:
31

-- Sample 4 --
Input:
5 4
Output:
76
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\888D_almost_identity_permutations.cpp" -o _run
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