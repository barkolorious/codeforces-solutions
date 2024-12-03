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
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = n / 2 - 1; i >= 0; i--) {
      int l = i, r = n - i - 1;

      if (a[l] == a[l + 1] || a[r] == a[r - 1]) swap(a[l], a[r]);

      // cout << i __ disturbance1 __ disturbance2 << ": ";
      // for (int x : a) cout << x << " ";
      // cout << endl;
    }

    int ans = 0;
    for (int i = 1; i < n; i++) ans += (a[i - 1] == a[i]);
    cout << ans << endl;
  }
}

/*
-- Sample 1 --
Input:
9
5
1 1 1 2 3
6
2 1 2 2 1 1
4
1 2 1 1
6
2 1 1 2 2 4
4
2 1 2 3
6
1 2 2 1 2 1
5
4 5 5 1 5
7
1 4 3 5 1 1 3
7
3 1 3 2 2 3 3
Output:
1
2
1
0
0
1
1
0
2
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\2033C_sakurako_s_field_trip.cpp" -o _run
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