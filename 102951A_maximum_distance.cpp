// barkolorious - 26 September 2024
#include <bits/stdc++.h>
using namespace std;

#define FIN(x) freopen(x ".in", "r", stdin)
#define FOUT(x) freopen(x ".out", "w", stdout)
#define int long long
#define pb  push_back
#define fr  first
#define sc  second

const int N = 2e5 + 5;

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\102951A_maximum_distance.cpp" -o _run
*/

void solve () {
  int n;
  cin >> n;
 
  vector<pair<int, int>> p(n);
  for(int i = 0; i < n; i++) cin >> p[i].first;
  for(int i = 0; i < n; i++) cin >> p[i].second;
 
  int ans = 0;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      int x1 = p[i].first, x2 = p[j].first;
      int y1 = p[i].second, y2 = p[j].second;
      ans = max(ans, ((x1 - x2) * (x1 - x2)) + 
                     ((y1 - y2) * (y1 - y2)));
    }
  }
  cout << ans;
}

/*
-- Sample 1 --
Input:
3
321 -15 -525
404 373 990
Output:
1059112
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