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

  bool allCaps = true;
  for(char c : s)
    if(c >= 'a') allCaps = false;

  bool wrongCaps = true;
  if(s[0] <= 'Z') wrongCaps = false;
  for(char c : s.substr(1))
    if(c >= 'a') wrongCaps = false;

  if(allCaps || wrongCaps){
    for(int i = 0; i < s.length(); i++){
      if(s[i] <= 'Z') s[i] += ('a' - 'A');
      else s[i] += ('A' - 'a');
    }
  }
  
  cout << s;
  
  return 0;
}
