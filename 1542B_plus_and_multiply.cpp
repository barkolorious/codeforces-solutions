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
    ll n, a, b; cin >> n >> a >> b;
    ll t = 1;
    bool flag = false;
    if(a == 1) {
      if((n-1) % b == 0) 
        flag = true;
    }
    else 
      while(t <= n){
        if(t % b == n % b) {flag = true; break;}
        t *= a;
      }

    if(flag) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}