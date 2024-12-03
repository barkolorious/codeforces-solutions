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
  int shops[n];
  for(int i = 0; i < n; i++) cin >> shops[i];

  sort(shops, shops + n);

  int q;
  cin >> q;
  for(int i = 0; i < q; i++){
    int x;
    cin >> x;
    int* l = shops;
    int* r = shops + n;
    if(*l > x) cout << 0 << endl;
    else{
      while(r - l > 1){
        int* m = l + (r - l) / 2;
        if(*m > x) r = m;
        if(*m <= x) l = m;
      }
      cout << r - shops << endl;
    }    
  }
  
  return 0;
}
