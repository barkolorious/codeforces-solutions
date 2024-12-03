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
  int n, a, count1(0), extra0(0), extra0max(-1);
  cin >> n;
  while (n--){
    cin >> a;
    if (a == 1){
      count1 += 1;
      if (extra0 > 0){
        extra0 -= 1;
      }
    }else{
      extra0 += 1;
      if (extra0 > extra0max){
        extra0max = extra0;
      }
    }
  }
  cout << count1 + extra0max << endl;
  return 0;
}
