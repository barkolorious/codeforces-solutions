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
  int n, t;//n book t time
  cin >> n >> t;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  
  int j = -1;
  int ans = 0;
  int sum = 0;
  for(int i = 0; i < n; i++){
    sum += a[i];
    if(sum > t){
      while(sum > t) sum -= a[++j];
    }
    ans = max(ans, i - j);
  }

  cout << ans;
  return 0;
}
