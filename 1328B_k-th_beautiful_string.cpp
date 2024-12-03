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
    long long x = 0;
    long long temp = k;
    while(temp > 0){
      temp -= (++x);
    }

    string ans = "";
    for(long long i = 0; i < n; i++) ans += 'a';
    ans[x] = 'b';
    ans[k - (x * (x - 1) / 2) - 1] = 'b';
    reverse(ans.begin(), ans.end());

    cout << ans << endl;

    

  }
  
  
  
  return 0;
}
