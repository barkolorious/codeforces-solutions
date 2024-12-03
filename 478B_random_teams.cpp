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
  long long n, m;

  cin >> n >> m;

  long long ans = 0;
  ans += (n % m) * ((n / m) + 1) * (n / m) / 2;
  ans += (m - (n % m)) * (n / m) * ((n / m) - 1) / 2;
  cout << ans << " ";
  ans = (n - m + 1) * (n - m) / 2;
  cout << ans;
  
  return 0;
}
