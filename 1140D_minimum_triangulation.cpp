#include <bits/stdc++.h>
#define llong long long
using namespace std;

int main(){
  int n; cin >> n;
  llong ans = 0;
  for(llong i = 2; i < n; i++) ans += i * (i + 1);
  cout << ans << endl;
  
  return 0;
}