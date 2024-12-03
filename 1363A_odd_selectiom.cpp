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
    int n, x;
    cin >> n >> x;
    int odd(0), even(0);
    for(int i = 0; i < n; i++){
      int temp;
      cin >> temp;
      if(temp % 2) odd++;
      else even++;
    }
    
    bool flag = false;
    for(int i = 1; i <= x; i += 2){
      if(i <= odd && (x - i) <= even) {flag = true; break;}
    }
    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
  }
  
  
  return 0;
}
