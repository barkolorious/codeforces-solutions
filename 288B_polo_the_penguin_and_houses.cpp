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
const int mod = 1e9 + 7;
int f[9] = {0, 1, 2, 9, 64, 625, 7776, 117649, 2097152};

int pwr (int x, int y) {
  int res = 1;
  while (y) {
    if (y & 1) res = (res % mod) * (x % mod) % mod;
    y >>= 1;
    x = (x % mod) * (x % mod) % mod;
  }
  return res;
}

/* Solution 1 */
void solve () {
  int n, k;
  cin >> n >> k;
  cout << (pwr(n - k, n - k) % mod) * f[k] % mod << endl;
}

/* Solution 2 */
// void solve () {
//   int n, k;
//   cin >> n >> k;
//   cout << (pwr(n - k, n - k) % mod) * (pwr(k, k - 1) % mod) % mod << endl;
// }

/*
-- Sample 1 --
Input:
5 2
Output:
54 

-- Sample 2 --
Input:
7 4
Output:
1728 
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\288B_polo_the_penguin_and_houses.cpp" -o _run
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