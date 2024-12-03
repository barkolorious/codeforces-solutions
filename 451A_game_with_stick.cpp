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
  int n, m;
  cin >> n >> m;

  int winner = 1; // 0->A 1->M

  while(n > 0 && m > 0){
    n--; m--; winner = (winner + 1) % 2;
  }

  if(winner) cout << "Malvika";
  else cout << "Akshat";
  
  
  return 0;
}
