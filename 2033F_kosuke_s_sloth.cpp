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
int location[N];

pair<vector<int>, set<int>> factor (int x) {
  vector<int> res1;
  set<int> res2;
  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      res2.insert(i);
      while (x % i == 0) { res1.pb(i); x /= i;}
    }
  }
  if (x > 1) { res1.pb(x); res2.insert(x); }
  return {res1, res2};
}

void solve () {
  int n = 150;
  int a = 1, b = 1;
  cout << 1 << endl << 1 << endl;
  for (int i = 2; i <= n; i++) {
    int c = a + b;
    // cout << c << endl;
    a = b; b = c;
    set<int> factors = factor(c).sc;
    for (int p : factors) {
      if (p < N && location[p] == 0) location[p] = i;
    }
  }
  for (int i = 2; i < N; i++) {
    if (factor(i).fr.size() == 1) {
      cout << i << " -> " << location[i] << endl;
    }
  }
}
/*

*/
/*
-- Sample 1 --
Input:

Output:

*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\2033F_kosuke_s_sloth.cpp" -o _run
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