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

const int N = 1e6 + 5;
const int mod = 998244353;
int inv[N];

void precalc () {
  inv[1] = 1;
  for (int i = 2; i < N; i++) inv[i] = mod - mod / i * inv[mod % i] % mod;
}

void solve () {
  int n; cin >> n;
  precalc();
  map<int, int> gifts; // i , sum of all 1 / k, p_i
  vector<int> a[n];
  for (int i = 0; i < n; i++) {
    int k; cin >> k;
    for (int j = 0; j < k; j++) {
      int x; cin >> x;
      gifts[x]++;
      a[i].pb(x);
    }
  }
  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int x : a[i]) {
      int prob = inv[a[i].size()] * gifts[x] % mod * inv[n] % mod;
      ans = (ans + prob) % mod;
    }
  }
  ans = ans * inv[n] % mod;
  cout << ans << endl;
}

/*
-- Sample 1 --
Input:
2
2 2 1
1 1
Output:
124780545

-- Sample 2 --
Input:
5
2 1 2
2 3 1
3 2 4 3
2 1 4
3 4 3 2
Output:
798595483
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1249D_santa_s_bot.cpp" -o _run
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