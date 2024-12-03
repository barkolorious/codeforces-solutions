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
  string ans = "";

  for(int i = 0; i < s.length(); i++)
    if(s[i] <= 'Z') s[i] += ('a' - 'A');
  
  for(char c : s){
    if(c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i'){
      ans += ".";
      ans += c;
    }
  }

  cout << ans;
  
  return 0;
}
