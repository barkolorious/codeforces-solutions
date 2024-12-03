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
  int n;
  cin >> n;
  vector<pair<int, int>> laptop;
  for(int i = 0; i < n; i++){
    int a, b;
    cin >> a >> b;
    laptop.push_back({a, b});
  }
  sort(laptop.begin(), laptop.end(), compare);

  bool flag = false;
  
  for(int i = 0; i < n - 1; i++){
    if(laptop[i].first == laptop[i + 1].first) continue;
    if(laptop[i].second > laptop[i + 1].second){flag = true; break;}
  }
  
  if(flag) cout << "Happy Alex";
  else cout << "Poor Alex";
  
  return 0;
}
