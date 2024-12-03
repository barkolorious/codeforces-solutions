#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max((a), (b)) > max((b), (c)) ? max((a), (b)) : max((b), (c))
#define min3(a, b, c) min((a), (b)) < min((b), (c)) ? min((a), (b)) : min((b), (c))
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;

int main(){
  int money;
  cin >> money;

  int maxState = max(max(money, (int) money / 10), (int) ((money - (money % 100)) / 10) + (money % 10));

  cout << maxState;
  
  return 0;
}
