#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int l = 1, r = n;
    for(int i = 0; i < n; i++){
      if(i & 1) cout << l++ << " ";
      else cout << r-- << " ";
    }
    cout << endl;
  }
}