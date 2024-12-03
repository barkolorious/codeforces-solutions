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
  int n, m, a, b;
  cin >> n >> m >> a >> b;

  if((float) b / m < (float) a){
    int ans = 0;
    ans += (n / m) * b;
    ans += min((n % m) * a, b);
    cout << ans;
  }else{
    int ans = 0;
    ans += n * a;
    cout << ans;
  }
  
  
  return 0;
}
