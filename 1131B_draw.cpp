#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  pair<int, int> match[n + 1];
  match[0] = {0, 0};
  for(int i = 1; i <= n; i++) cin >> match[i].first >> match[i].second;
  int ans = 0;
  for(int i = 0; i < n; i++){
    if(match[i] == match[i + 1]) continue;
    int a = match[i].first, b = match[i].second;
    int c = match[i + 1].first, d = match[i + 1].second;
    
    ans += max(0, min(c, d) - max(a, b) + 1);
    if(d == c) ans--;
  }
  if(match[n].first == match[n].second) ans++;
  cout << ans << endl;
  
  return 0;
}