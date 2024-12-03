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

  int x, y, z;
  x = y = z = 0;

  for(int i = 0; i < n; i++){
    int _x, _y, _z;
    cin >> _x >> _y >> _z;
    x += _x;
    y += _y;
    z += _z;
  }
  
  if(!x && !y && !z) cout << "YES";
  else cout << "NO";
  
  
  return 0;
}
