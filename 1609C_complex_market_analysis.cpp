#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
bool prime[N];

void sieve(){
  for(int i = 2; i < N; i++) prime[i] = true;
  
  for(int i = 2; i < N; i++)
    if(prime[i])
      for(int j = 2 * i; j < N; j += i)
        prime[j] = false;
}

int main(){
  sieve();

  int t; cin >> t;
  while(t--){
    int n, e; cin >> n >> e;
    int a[n];
    for(int& a_i : a) cin >> a_i;

    int num[n]{}, streak[n]{}, ans = 0;
    for(int i = 0; i < n; i++){
      if(!prime[a[i]] && a[i] != 1) continue;
      if(i < e){
        if(a[i] == 1) streak[i] = 1;
        continue;
      }
      if(prime[a[i]] && a[i - e] == 1){
        num[i] = streak[i - e];
      }
      if(a[i] == 1 && prime[a[i - e]]){
        num[i] = 2;
        streak[i] = 1;
      }
      if(a[i] == 1 && a[i - e] == 1){
        if(num[i - e]){
          num[i] = num[i - e];
          num[i - e] = 0;
        }
        streak[i] = streak[i - e] + 1;
      }
    }
    for(int x : num) ans += x;
    for(int x : num) cout << x << ' '; cout << endl;
    for(int x : streak) cout << x << ' '; cout << endl;
    cerr << ':';
    cout << ans << endl;
  }
  
  
  return 0;
}