#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;
  
int a, b, c;

int main(){
  int n;

  cin >> n >> a >> b >> c;
  int ans = 0;
  for(int i = 0; i * a <= n; ++i){
    for(int j = 0; i * a + j * b <= n; ++j){
      if((n - i * a - j * b) % c == 0){
        int k = (n - i * a - j * b) / c;
        ans = max(ans, i + j + k);
      }
    }
  }
  cout << ans;
  
  return 0;
}
