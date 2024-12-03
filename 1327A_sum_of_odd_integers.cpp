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
  for(int _t = 0; _t < t; _t++){
    long long n, k;
    cin >> n >> k;
    if(n % 2 == k % 2){
      if(k * k > n) cout << "NO" << endl;
      else cout << "YES" << endl;
    }else
      cout << "NO" << endl;
  } 

  return 0;
}
