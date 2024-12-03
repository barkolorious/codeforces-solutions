#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  int n; cin >> n;

  vector<ll> w(2*n); 
  for(int i = 0; i < 2*n; i++) cin >> w[i];
  sort(w.begin(), w.end());

  ll ans = LLONG_MAX;
  for(int i = 0; i < 2*n; i++){
    for(int j = i+1; j < 2*n; j++){
      ll curr = 0;

      vector<ll> temp(w);
      temp.erase(temp.begin() + i);
      temp.erase(temp.begin() + j - 1);

      for(int k = 0; k < temp.size(); k += 2)
        curr += temp[k+1] - temp[k];

      ans = min(ans, curr);
    }
  }
  
  cout << ans << endl;
  return 0;
}