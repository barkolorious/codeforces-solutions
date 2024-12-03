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
  int n;
  cin >> n;
  int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];

  int b[n];
  b[0] = a[0];
  for(int i = 1; i < n; i++){
    b[i] = b[i - 1] + a[i];
  }

  int t;
  cin >> t;
  for(int _t = 0; _t < t; _t++){
    int q;
    cin >> q;
    int* l = b;
    int* r = b + n;
    if(*l >= q){
      cout << 1 << endl;
      continue;
    }
    while(r - l > 1){
      int* m = l + (r - l) / 2;
      if(*m >= q) r = m;
      else l = m;
    }
    cout << r - b + 1 << endl;
  }
  
  return 0;
}
