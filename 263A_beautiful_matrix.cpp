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
  int x, y;
  for(int i = 0; i < 5; i++){
    for(int j = 0; j < 5; j++){
      int temp;
      cin >> temp;
      if(temp){
        x = i; y = j;
      }
    }
  }
  
  int ans = abs(x - 2) + abs(y - 2);

  cout << ans;
  
  return 0;
}