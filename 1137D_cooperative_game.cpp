// barkolorious - 11 October 2024
#include <bits/stdc++.h>
using namespace std;

#define FIN(x) freopen(x ".in", "r", stdin)
#define FOUT(x) freopen(x ".out", "w", stdout)
#define int long long
#define pb  push_back
#define fr  first
#define sc  second
#define __ << " " <<

const int N = 10;
int pos[N];

void extract_pos () {
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    for (char c : s) pos[c - '0'] = i;
  }
}

void solve () {
  int tortoise = 0, rabbit = 1;
  cout << "next" __ tortoise __ rabbit << endl;
  extract_pos();
  cout << "next" __ rabbit << endl;
  extract_pos();
  while (pos[rabbit] != pos[tortoise]) {
    cout << "next" __ tortoise __ rabbit << endl;
    extract_pos();
    cout << "next" __ rabbit << endl;
    extract_pos();
  }
  int finder = 2;
  while (pos[finder] != pos[tortoise]) {
    cout << "next 0 1 2 3 4 5 6 7 8 9" << endl;
    extract_pos();
  }
  cout << "done" << endl;
}

/*
-- Sample 1 --
Output: next 0 5
Input:  2 05 12346789
Output: next 0 1 3
Input:  3 246789 135 0
Output: next 2 3 0 1 4 5 6 7 8 9
Input:  3 246789 0 135
Output: next 9 8 7 6 5 4 3 2 1 0
Input:  3 246789 0 135
Output: next 0 1 3 5
Input:  2 135 0246789
Output: next 1 3 5
Input:  1 0123456789
Output: done
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1137D_cooperative_game.cpp" -o _run
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