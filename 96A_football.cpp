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
  string str;
  cin >> str;
  char last = '-';
  int lastIdx = -1;
  int flag = 0;
  for(int i = 0; i < str.length(); i++){
    if(str[i] != last){
      last = str[i];
      lastIdx = i;
    }
    if(i - lastIdx + 1 >= 7){
      flag = 1; break;
    }
  }  
  
  cout << ((flag) ? "YES" : "NO");
  
  return 0;
}
