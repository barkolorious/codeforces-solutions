#include <bits/stdc++.h>
#define ty array<int,6>
using namespace std;

const int N = 1e5 + 5;


int main(){
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int b[n], pre[n], suf[n];
    
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) {
      pre[i] = b[i] + i;
      suf[i] = b[i] - i;
    }

    for(int i = 1; i < n; i++) pre[i] = max(pre[i], pre[i - 1]);
    for(int i = n - 2; i >= 0; i--) suf[i] = max(suf[i], suf[i + 1]);

    int ans = 0;
    for (int i = 1; i < n - 1; i++) {
      ans = max(ans, pre[i - 1] + b[i] + suf[i + 1]);
    }
    cerr << ':';
    cout << ans << endl;
  }
  
  return 0;
}

/*
-- Sample 1 --
Input:
4
5
5 1 4 2 3
4
1 1 1 1
6
9 8 7 6 5 4
7
100000000 1 100000000 1 100000000 1 100000000
Output:
8
1
22
299999996
*/