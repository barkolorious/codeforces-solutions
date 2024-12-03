// barkolorious - 28 October 2024
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

int gcd (int a, int b) {
  if (!b) return a;
  return gcd(b, a % b);
}

pair<int, int> simplify (int a, int b) {
  int g = gcd(a, b);
  return {a / g, b / g};
}

void solve () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int d = 0, k = 0;
    map<pair<int, int>, int> freq;
    for (int i = 0; i < n; i++) {
      char c; cin >> c;
      if (c == 'D') d++;
      else k++;
      cout << ++freq[simplify(d, k)] << " \n"[i == n - 1];
    }
  }
}

/*
-- Sample 1 --
Input:
5
3
DDK
6
DDDDDD
4
DKDK
1
D
9
DKDKDDDDK
Output:
1 2 1 
1 2 3 4 5 6 
1 1 1 2 
1 
1 1 1 2 1 2 1 1 3 
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1536C_diluc_and_kaeya.cpp" -o _run
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