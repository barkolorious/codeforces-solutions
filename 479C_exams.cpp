#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))
#define ll long long

const long long INF  = 1e18;

bool comparison(pair<ll, ll> a, pair<ll, ll> b){
  if(a.first == b.first) return a.second < b.second; 
  return a.first < b.first;
}

int main(){
  int n;
  cin >> n;
  vector<pair<ll, ll>> exams;
  for(int i = 0; i < n; i++){
    ll a, b;
    cin >> a >> b;
    exams.push_back({a, b});
  }
  sort(exams.begin(), exams.end(), comparison);

  int ans = exams[0].second;
  for(int i = 1; i < n; i++){
    if(exams[i].second >= ans) ans = exams[i].second;
    else ans = exams[i].first;
  } 
  
  cout << ans;

  return 0;
}
