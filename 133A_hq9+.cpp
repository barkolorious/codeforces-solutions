#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))
#define contains

const long long INF  = 1e18;

int main(){
  string code;
  cin >> code;

  if(code.find("H") < code.length() ||code.find("Q") < code.length() || code.find("9") < code.length()){
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}
