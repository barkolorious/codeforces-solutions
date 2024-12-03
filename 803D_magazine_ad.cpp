// barkolorious - 14 October 2024
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
vector<pair<string, int>> parts;

int check (int len) {
  int curr = 0, res = 1;
  for (auto part : parts) {
    if (curr + part.fr.length() + part.sc > len) {
      res++; curr = 0;
      // cout << endl;
    }
    // cout << part.fr << part.sc;
    curr += part.fr.length() + part.sc;
  }
  // cout << endl;
  return res;
}

void solve () {
  int k, max_length = 0; 
  cin >> k; cin.get();
  string s, curr = "";
  getline(cin, s);
  for (char c : s) {
    switch (c) {
      case '-':
      case ' ':
        parts.pb({curr, 1});
        max_length = max(max_length, (int) curr.length() + 1);
        curr = "";
        break;
      default:
        curr += c;
    }
  }
  if (curr != "") {
    parts.pb({curr, 0});
    max_length = max(max_length, (int) curr.length());
  }

  int l = max_length, r = s.length();
  while (l < r) {
    int m = (l + r) / 2;
    if (check(m) > k) l = m + 1;
    else r = m;
  }
  
  cout << l << endl;
}

/*
-- Sample 1 --
Input:
4
garage for sa-le
Output:
7

-- Sample 2 --
Input:
4
Edu-ca-tion-al Ro-unds are so fun
Output:
10
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\803D_magazine_ad.cpp" -o _run
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