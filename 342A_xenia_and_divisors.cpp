#include <bits/stdc++.h>
using namespace std;

int main(){
  /*
  1 2 4 
  1 2 6
  1 3 6 
  */
  int n; cin >> n;
  int a[n];
  int one = 0, two = 0, three = 0, four = 0, six = 0;
  for(int& a_i : a){
    cin >> a_i;
    if(a_i == 5 || a_i == 7){
      cout << -1 << endl;
      return 0;
    } 
    if(a_i == 1) one++;
    if(a_i == 2) two++;
    if(a_i == 3) three++;
    if(a_i == 4) four++;
    if(a_i == 6) six++;
  }

  bool flag = true;
  vector<string> ans;
  while(four){
    if(one <= 0 || two <= 0){
      flag = false; break;
    }
    ans.push_back("1 2 4");
    one--; two--; four--;
  }

  if(flag && one == six && one == two + three){
    for(int i = 0; i < two; i++) ans.push_back("1 2 6");
    for(int i = 0; i < three; i++) ans.push_back("1 3 6");
    one = six = two = three = 0;
  }

  if(one > 0 || two > 0 || three > 0 || four > 0 || six > 0) flag = false;
  
  if(flag) for(string str : ans) cout << str << endl;
  else cout << -1 << endl;

  return 0;
}