#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    string l, r; cin >> l >> r;
    if(l.length() < r.length()){
      int llen = l.length(), rlen = r.length();
      int diff = rlen - llen;
      l = string(diff, '0') + l;
    } else if(r.length() < l.length()){
      int llen = l.length(), rlen = r.length();
      int diff = llen - rlen;
      r = string(diff, '0') + r;
    }

    int len = l.length();
    int ans = 0;
    bool equal_to_this_point = true;
    for(int i = 0; i < len; i++){
      if(equal_to_this_point) 
        if(l[i] == r[i]) continue;
        else {
          equal_to_this_point = false;
          ans += abs((l[i] - '0') - (r[i] - '0'));
        }
      else ans += 9;
    }
    cout << ans << endl;
  }
}