#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))
#define ll long long

const long long INF  = 1e18;

int main(){
  int n;
  ll last = -INF;
  ll ans = 0;
  ll t_x;
  cin >> n;

  for(int i = 0; i < n; i++){
    ll x, h;
    cin >> x >> h;
    if(x - h > last){
      last = x;
      ans++;
    }else if(x > last){
      last = x + h;
      ans++;
    }else if(x - h > t_x) last = x;
    else last = x + h;

    t_x = x;
  }

  cout << ans;
  
  return 0;
}
