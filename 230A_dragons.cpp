#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;

bool compare(pair<int, int> a, pair<int, int> b){
  return a.first < b.first;
}

int main(){
  int s, n;
  cin >> s >> n;

  vector<pair<int, int>> dragons;
  for(int i = 0; i < n; i++){
    int x, y; cin >> x >> y;
    dragons.push_back({x, y});
  }
  
  sort(dragons.begin(), dragons.end(), compare);

  bool flag = true;

  for(auto dragon : dragons){
    if(s > dragon.first) s += dragon.second;
    else {flag = false; break;}
  }
  
  if(flag) cout << "YES";
  else cout << "NO";

  return 0;
}
