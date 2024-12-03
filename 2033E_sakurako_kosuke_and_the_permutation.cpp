// barkolorious - 27 October 2024
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

void solve () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int p[n + 1], pos[n + 1];
    for (int i = 1; i <= n; i++) { cin >> p[i]; pos[p[i]] = i; }
    int ans = 0;
    // for (int i = 1; i <=n; i++) cout << p[i] << " "; cout << endl;
    // for (int i = 1; i <=n; i++) cout << pos[i] << " "; cout << endl;

    for (int i = 1; i <= n; i++) {
      if (p[p[i]] == i) continue;
      swap(p[p[i]], p[pos[i]]);
      swap(pos[p[p[i]]], pos[p[pos[i]]]);


      // for (int i = 1; i <=n; i++) cout << p[i] << " "; cout << endl;
      // for (int i = 1; i <=n; i++) cout << pos[i] << " "; cout << endl;
      // cout << endl;
      ans++;
    }
    cout << ans << endl;
  }
}

/*
-- Sample 1 --
Input:
6
5
1 2 3 4 5
5
5 4 3 2 1
5
2 3 4 5 1
4
2 3 4 1
3
1 3 2
7
2 3 1 5 6 7 4
Output:
0
0
2
1
0
2
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\2033E_sakurako_kosuke_and_the_permutation.cpp" -o _run
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