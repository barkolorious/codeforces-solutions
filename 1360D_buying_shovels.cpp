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
  int t;
  cin >> t;
  while(t--){
    long long n, k;
    cin >> n >> k;
    long long ans = INF;
    if(k == 1) ans = n;
    else if(n <= k) ans = 1;
    else{
      for(long long i = 2; i * i <= n; i++){
        if(n%i==0){
          if(i <= k) ans = min(ans, n / i);
          if((n / i) <= k) ans = min(ans, i);
        }
      }
      if(ans == INF) ans = n;
    }
    cout << ans << endl;
  }
  
  
  
  return 0;
}
