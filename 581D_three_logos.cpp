#include <bits/stdc++.h>
#define f first
#define s second
using namespace std;

int checkbit (int x, int j) {
  return (x & (1 << j)) >> j;
}

int main(){
  int x1, y1, x2, y2, x3, y3; 
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  int area = x1 * y1 + x2 * y2 + x3 * y3;
  int side = sqrt(area);

  if (side * side != area) {
    cout << -1 << endl;
    return 0;
  }
  
  for (int mask = 0; mask < 8; mask++) {
    pair<int, int> logos[3] = { (checkbit(mask, 0) ? make_pair(x1, y1) : make_pair(y1, x1)),    
                                (checkbit(mask, 1) ? make_pair(x2, y2) : make_pair(y2, x2)), 
                                (checkbit(mask, 2) ? make_pair(x3, y3) : make_pair(y3, x3)) };
    
    int x = 0, y = 0;
    vector<vector<char>> ans = vector<vector<char>>(side, vector<char>(side, '.'));
    bool flag = true;

    for (int logo = 0; logo < 3; logo++) {
      for (int j = 0; j < logos[logo].s; j++) {
        if (y + j >= side) { flag = false; break; }
        for (int i = 0; i < logos[logo].f; i++) {
          if (x + i >= side) { flag = false; break; }
          if (ans[y + j][x + i] != '.') { flag = false; break; }
          ans[y + j][x + i] = char('A' + logo);
        }
      }

      bool flag2 = false;
      for (int j = 0; j < side; j++) {
        for (int i = 0; i < side; i++) {
          if (ans[j][i] == '.') {
            x = i, y = j;
            flag2 = true;
            break;
          }
        }
        if (flag2) break;
      }
      
      flag &= (logo == 2 ? 1 : flag2);

      if (!flag) break;
    }

    if (flag) {
      cout << side << endl;
      for (int j = 0; j < side; j++) {
        for (int i = 0; i < side; i++) cout << ans[j][i];
        cout << endl;
      }
      return 0;
    }
  }

  cout << -1 << endl;
  
  return 0;
}

/*
-- Sample 1 --
Input:
5 1 2 5 5 2
Output:
5
AAAAA
BBBBB
BBBBB
CCCCC
CCCCC

-- Sample 2 --
Input:
4 4 2 6 4 2
Output:
6
BBBBBB
BBBBBB
AAAACC
AAAACC
AAAACC
AAAACC
*/