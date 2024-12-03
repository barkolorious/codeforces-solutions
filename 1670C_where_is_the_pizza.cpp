#include <bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n + 1], b[n + 1], idx_at_a[n + 1], idx_at_b[n + 1]; 
    // a ve b permütasyonu, i sayısı a permütasyonundaki indeksi
    // i sayısının b permütasyonunndaki indeksi
    for(int i = 1; i <= n; i++){
      cin >> a[i]; idx_at_a[a[i]] = i;
    }
    for(int i = 1; i <= n; i++){
      cin >> b[i]; idx_at_b[b[i]] = i;
    }
    vector<int> loops(1, -1); // length
    int in_which_loop[n + 1]{}; // i sayısı hangi loopta
    for(int i = 1; i <= n; i++){
      if(in_which_loop[i]) continue;
      in_which_loop[i] = loops.size();
      loops.push_back(1); 
      int idx = idx_at_a[i];
      int curr = b[idx];
      while(curr != i){
        loops[loops.size() - 1]++;
        in_which_loop[curr] = in_which_loop[i];
        idx = idx_at_a[curr];
        curr = b[idx];
      }
    }
    int d[n + 1]; 
    for(int i = 1; i <= n; i++){
      cin >> d[i];
      if(!d[i]) continue;
      loops[in_which_loop[d[i]]] = 0;
    }
    int ans = 1;
    for(int j : loops){
      if(j < 1) continue;
      if(j == 1) continue;
      ans *= 2;
      ans %= mod;
    }
    cout << ans << endl;
  }
  
  return 0;
}