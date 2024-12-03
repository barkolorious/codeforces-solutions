// barkolorious - 20 October 2024
// in god, do we trust? 
#include <bits/stdc++.h>
using namespace std;

#define FIN(x) freopen(x ".in", "r", stdin)
#define FOUT(x) freopen(x ".out", "w", stdout)
#define int    long long
#define pb     push_back
#define fr     first
#define sc     second
#define __     << " " << 
#define ANS(a) ((a) ? "YES" : "NO")

const int N = 2e5 + 5;

void solve () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    bool s[n];
    for (int i = 0; i < n; i++) {
      char c; cin >> c;
      s[i] = (c == '1');
    }
    if (n == 2) {
      cout << ANS(s[0] | s[1]) << endl;
    } else if (n == 3) {
      bool flag = (!s[0] & !s[1] & !s[2]) | (!s[0] & s[1] & !s[2]);
      cout << ANS(!flag) << endl;
    } else {
      bool flag = false, last = s[0];
      int idx = 0;
      for (int i = 1; i < n; i++) {
        if (s[i] == last) continue;
        else {
          if (last == true && i - idx >= 2) 
            { flag = true; break; }
          else if (last == true && i == 1) 
            { flag = true; break; }
          last = s[i];
          idx = i;
        }
      }
      if (last == true && n - idx >= 1) flag = true;
      cout << ANS(flag) << endl;
    }
  }
}

/*
-- Sample 1 --
Input:
5
2
11
3
010
12
101111111100
10
0111111011
8
01000010
Output:
YES
NO
YES
YES
NO
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\2030C_a_true_battle.cpp" -o _run
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