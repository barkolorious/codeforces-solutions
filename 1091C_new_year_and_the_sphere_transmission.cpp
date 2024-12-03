#include <bits/stdc++.h>
#define llong long long
using namespace std;

llong gcd(llong a, llong b){
  if(b) return gcd(b, a % b);
  else return a;
}

int main(){
  llong n; cin >> n;
  set<llong> ans;
  vector<llong> divs;
  for(llong i = 1; i <= sqrt(n); i++){
    if(n % i) continue;
    divs.push_back(i);
    if(i * i != n) divs.push_back(n / i);
  }
  for(llong k : divs){
    llong q = n / k;
    ans.insert(n * (q - 1) / 2 + q);
  }

  for(auto itr : ans) cout << itr << " ";
  cout << endl;
  
  return 0;
}
