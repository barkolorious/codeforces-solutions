#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))
#define all(a) a.begin(), a.end()

const long long INF  = 1e18;

int main(){
  int n;
  cin >> n;

  int t; int one = 0; int two = 0; int three = 0; int four = 0;
  for(int i = 0; i < n; i++){
    cin >> t;
    if(t == 1) one++;
    if(t == 2) two++;
    if(t == 3) three++;
    if(t == 4) four++;
  }

  int ans = 0;

  //4
  t = four;
  ans += t; four -= t;

  //1 3
  t = min(one, three);
  ans += t; one -= t; three -= t;

  //3
  t = three;
  ans += t; three -= t;

  //2 2
  t = two / 2;
  ans += t; two -= 2 * t;

  //1 1 2
  t = min(one / 2, two);
  ans += t; one -= 2 * t; two -= t;

  //1 2
  t = min(one, two);
  ans += t; one -= t; two -= t;

  //2
  t = two;
  ans += t; two -= t;

  //1 1 1 1
  t = one / 4;
  ans += t; one -= t * 4;

  if(one > 0) ans++;

  cout << ans;

  return 0;
}
