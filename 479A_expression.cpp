#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;

int main(){
  
  /*
  a+b+c
  a+b*c (a+b)*c
  a*b+c a*(b+c)
  a*b*c
  */
  int a, b, c;
  cin >> a >> b >> c;
  int m = INT_MIN;
  m = max(m, a + b + c);
  m = max3(m, a + b * c, (a + b) * c);
  m = max3(m, a * b + c, a * (b + c));
  m = max(m, a * b * c);

  cout << m;
  
  return 0;
}
