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
  
  vector<int> puzzles(m);

  for(int i = 0; i < m; i++) cin >> puzzles[i];

  sort(puzzles.begin(), puzzles.end());

  int minDif = INT_MAX;
  
  for(int i = 0; i <= m - n; i++){
    minDif = min(minDif, puzzles[i + n - 1] - puzzles[i]);
  }

  cout << minDif;
    
  return 0;
}
