#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;

int main(){
  string s;
  cin >> s;
  vector<int> ab, ba;
  for(int i = 0; i < s.length() - 1; i++){
    if(s[i] == 'A' && s[i + 1] == 'B') ab.push_back(i);
    if(s[i] == 'B' && s[i + 1] == 'A') ba.push_back(i);
  }
  reverse(ba.begin(), ba.end());
  for(int i = 0; i < ab.size(); i++){
    for(int j = 0; j < ba.size(); j++){
      if(abs(ab[i] - ba[j]) > 1){
        cout << "YES" << endl;
        return 0;
      }
    }
  }

  cout << "NO" << endl;
  //012345678901234567
  //ABABAABFGHGHGHABAB
  //ab: 0 2 5 14 16
  //ba: 1 3 15


  //ab + 1 == ba || ab == ba || ab == ba + 1
  //ab - ba == -1 || ab - ba == 0 || ab - ba == 1
  //abs(ab - ba) <= 1 ==> overlaping
  
  
  return 0;
}
