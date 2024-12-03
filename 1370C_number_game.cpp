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
    int n; 
    cin >> n;
    int m = 0;
    while(n % 2 == 0) {n /= 2; m++;}
    bool q = false;
    for(int p = 2; p * p <= n; p++) if(n % p == 0) {q = true; break;}

    cout << (((n == 1 && m != 1) || (n != 1 && m == 1 && !q)) ? "FastestFinger" : "Ashishgup") << endl;

  }
  
  return 0;
}
