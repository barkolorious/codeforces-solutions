// barkolorious - 25 October 2024
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

int gcd(int a,int b){if(!b)return a;return gcd(b,a%b);}

void solve () {
  int n; cin >> n;
  vector<int> coprime;
  for (int i = 1; i < n; i++) 
    if (gcd(i, n) == 1) coprime.pb(i);

  int pre[coprime.size() + 1];
  pre[0] = 1;
  for (int i = 0; i < coprime.size(); i++) 
    pre[i + 1] = coprime[i] * pre[i] % n;
  int ans = 0;
  for (int i = 0; i <= coprime.size(); i++) {
    if (pre[i] == 1) ans = i;
  }
  cout << ans << endl;
  for (int i = 0; i < ans; i++) cout << coprime[i] << " \n"[i == ans - 1];
}

/*
-- Sample 1 --
Input:
5
Output:
3
1 2 3

-- Sample 1 --
Input:
8
Output:
4
1 3 5 7
*/

/*
g++ -std=c++17 -O2 -Wall -DLOCAL "C:\Users\LENOVO\Desktop\BARKIN\Genel\Programming\Competitive\Questions\CodeForces\1514C_product_1_modulo_n.cpp" -o _run
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