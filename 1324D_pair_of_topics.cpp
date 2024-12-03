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
  cin >> n;
  ll a[n], b[n];
  ll amb[n];

  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = 0; i < n; i++) cin >> b[i];
  for(int i = 0; i < n; i++) amb[i] = a[i] - b[i];
  sort(amb, amb + n, greater<int>());
  
  ll ans = 0;
  int j = n - 1;
  for(int i = 0; i < n; i++){ 
    if(amb[i] <= 0) break;         //0 1 2  3  4 
    for(; j > i; j--){//5 3 0 -1 -2
      if(amb[i] + amb[j] > 0) {ans += j - i; break;}
    }
  }//ai + aj > bi + bj ai - bi > -(aj - bj)  ambi + ambj > 0

  cout << ans;
  
  return 0;
}
