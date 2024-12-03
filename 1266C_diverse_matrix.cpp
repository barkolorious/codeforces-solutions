#include <bits/stdc++.h>
using namespace std;

int main(){
  int r, c; cin >> r >> c;
  /*
  1*(r+1)  1*(r+2)  ... 1*(r+c)
  2*(r+1)  2*(r+2)  ... 2*(r+c)
  ...      ...      ... ...
  r*(r+1)  r*(r+2)  ... r*(r+c)
  */
  if(r == 1 && c == 1){
    cout << "0\n"; return 0;
  }

  for(int y = 1; y <= r; y++){
    for(int x = 1; x <= c; x++){
      if(r >= c) cout << x * (y + c) << ' ';
      else cout << y * (x + r) << ' ';
    }
    cout << '\n';
  }
  
  return 0;
}