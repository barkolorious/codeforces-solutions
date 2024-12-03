#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;

int main(){
  unsigned long long n;
  cin >> n;

  unsigned long long ans = 0;

  vector<int> d;
  while(n){
    int digit = n % 10;
    d.push_back(digit);
    n /= 10;
  }

  if(d[d.size() - 1] > 4 && d[d.size() - 1] != 9) ans += 9 - d[d.size() - 1];
  else ans += d[d.size() - 1];
  ans *= 10;

  for(int i = d.size() - 2; i >= 0; i--){
    if(d[i] > 4) ans += 9 - d[i];
    else ans += d[i];
    ans *= 10;
  }
  
  cout << ans / 10;
  
  return 0;
}
