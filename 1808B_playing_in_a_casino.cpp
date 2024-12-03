#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;
    ll cards[n][m];
    for(int i = 0; i < n; i++)
      for(int j = 0; j < m; j++)
        cin >> cards[i][j];
    ll ans = 0;
    for(int i = 0; i < m; i++){
      vector<ll> temp;
      ll sum = 0, curr = 0;
      for(int j = 0; j < n; j++){
        temp.pb(cards[j][i]);
        sum += cards[j][i];
      }
      sort(temp.begin(), temp.end());
      for(int j = 0; j < n; j++){
        curr += temp[j];
        ans += abs((sum - curr) - (n - (j + 1)) * temp[j]);
      }
    }
    cout << ans << endl;
  }
  
  return 0;
}