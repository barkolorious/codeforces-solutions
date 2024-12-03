// barkolorious - 15 October 2024
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
int n, k;
map<int, int> s;
vector<int> t;

bool check (int count) {
  t.clear();
  for (auto x : s) {
    int num = min(x.sc / count, k - t.size());
    for (int i = 0; i < num; i++) 
      t.pb(x.fr);
  }
  return t.size() == k;
}

void solve () {
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int s_i; cin >> s_i;
    s[s_i]++;
  }

  int l = 0, r = n;
  while (r - l > 1) {
    int m = (l + r) / 2; // copy count
    if (check(m)) l = m;
    else r = m;
    // cout << l __ r << endl;
  }
  
  if (!check(r)) check(l);

  for (int i = 0; i < k; i++) {
    cout << t[i] << " \n"[i == k - 1];
  }
}

/*
-- Sample 1 --
Input:
7 3
1 2 3 2 4 3 1
Output:
1 2 3 

-- Sample 2 --
Input:
10 4
1 3 1 3 10 3 7 7 12 3
Output:
7 3 1 3

-- Sample 3 --
Input:
15 2
1 2 1 1 1 2 1 1 2 1 2 1 1 1 1
Output:
1 1 
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1077D_cutting_out.cpp" -o _run
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