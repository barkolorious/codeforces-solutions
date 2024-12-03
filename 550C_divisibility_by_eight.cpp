#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;

int main(){
  string n;
  cin >> n;

  for(int i = n.size() - 1; i >= 0; i--){
    int d = n[i] - '0';
    if(d % 8 == 0) {cout << "YES" << endl << d << endl; return 0;}
  }
  for(int i = n.size() - 1; i >= 0; i--){
    for(int j = i - 1; j >= 0; j--){
      int d = (n[i] - '0') + 10 * (n[j] - '0');
      if(d % 8 == 0) {cout << "YES" << endl << d << endl; return 0;}
    }
  }
  for(int i = n.size() - 1; i >= 0; i--){
    for(int j = i - 1; j >= 0; j--){
      for(int k = j - 1; k >= 0; k--){
        int d = (n[i] - '0') + 10 * (n[j] - '0') + 100 * (n[k] - '0');
        if(d % 8 == 0) {cout << "YES" << endl << d << endl; return 0;}
      }
    }
  }
  cout << "NO" << endl;
  
  return 0;
}
