// Almighty God-Emperor
// HEIL u/SPEZ
#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define tab '\t'
#define sp ' '
#define pb push_back
#define ll long long
#define debug(a) cerr << "\nDEBUG \"" << #a << "\"\nVal: " << a << "\nAdd: " << &a << endl << endl
#define check() cerr << "\nCHECK\n\n"
#define setbit(x, j) x |= (1<<j)
#define removebit(x, j) x &= ~(1<<j)
#define checkbit(x, j) ((x & (1<<j)) >> j)
#define flipbit(x, j) x ^= (1<<j)
#define lsb(x, t) t = (~x & (-(~x)))

const long long INF  = 0x7FFFFFFFFFFFFFFF;
const long long N = 1e5+5;
const long long mod = 1e9 + 7;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int h = INT_MIN, l = INT_MAX;
    int hi = -1, li = -1;
    int diff = 0;
    for(int i = 0; i < n; i++) {
      int a; cin >> a;
      if(a > h && i > hi) {h = a; hi = i;}
      if(a < l || li < hi) {l = a; li = i;}
      if(hi > -1 && li > -1) diff = max(diff, h - l);
    }
    int ans = 0;
    while(diff > 0){
      diff >>= 1; ans++;
    }
    cout << ans << endl;
  }
}