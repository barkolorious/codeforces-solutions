// barkolorious - 02 October 2024
#include <bits/stdc++.h>
using namespace std;

#define FIN(x) freopen(x ".in", "r", stdin)
#define FOUT(x) freopen(x ".out", "w", stdout)
#define int long long
#define pb  push_back
#define fr  first
#define sc  second

const int N = 2e5 + 5;
double pos[N], spd[N];
int n;

double cost (double x) {
  double ret = 0;
  for (int i = 0; i < n; i++) {
    ret = max(ret, abs(pos[i] - x) / spd[i]);
  }
  return ret;
}

void solve () {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> pos[i];
  for (int i = 0; i < n; i++) cin >> spd[i];
  double l = 1, r = 1e9;
  while (r - l >= 10e-7) {
    double m = (r + l) / 2;
    if (cost(m) < cost(m + 1e-6)) r = m;
    else l = m;
  }
  cout << setprecision(12) << fixed << cost(l) << endl;
}

/*
-- Sample 1 --
Input:
3
7 1 3
1 2 1
Output:
2.000000000000

-- Sample 2 --
Input:
4
5 10 3 2
2 3 2 4
Output:
1.400000000000
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\782B_the_meeting_place_cannot_be_changed.cpp" -o _run
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