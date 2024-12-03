// barkolorious - 13 October 2024
// 
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

int sum (int a, int b) {
  int a_and_b, a_or_b;
  cout << "and" __ a __ b << endl;
  cin >> a_and_b;
  cout << "or" __ a __ b << endl;
  cin >> a_or_b;
  return a_and_b + a_or_b;
}

void solve () {
  int n, k; cin >> n >> k;
  int aPb = sum(1, 2);
  int aPc = sum(1, 3);
  int bPc = sum(2, 3);
  vector<int> arr;
  arr.pb((aPb + aPc - bPc) / 2);
  arr.pb(aPb - arr[0]);
  arr.pb(aPc - arr[0]);

  for (int i = 4; i <= n; i++) {
    arr.pb(sum(1, i) - arr[0]);
  }

  sort(arr.begin(), arr.end());
  cout << "finish" __ arr[k - 1] << endl;
}

/*
-- Sample 1 --
Input:  7 6
Output: and 2 5
Input:  2
Output: or 5 6
Input:  7
Output: finish 5
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1556D_take_a_guess.cpp" -o _run
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