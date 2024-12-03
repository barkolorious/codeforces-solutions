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
  int n;
  cin >> n;
  string a;
  cin >> a;

  vector<int> digits;
  for(int i = 0; i < n; i++){
    char d = a[i];
    if(d != 4 + '0' && d != 6 + '0' && d != 8 + '0' && d != 9 + '0') digits.push_back(d - '0');
    else if(d == 4 + '0') {digits.push_back(3); digits.push_back(2); digits.push_back(2);}
    else if(d == 6 + '0') {digits.push_back(5); digits.push_back(3);}
    else if(d == 8 + '0') {digits.push_back(7); digits.push_back(2); digits.push_back(2); digits.push_back(2);}
    else if(d == 9 + '0') {digits.push_back(7); digits.push_back(3); digits.push_back(3); digits.push_back(2);}
  }

  sort(digits.begin(), digits.end(), greater<int>());

  for(int x : digits) if(x > 1) cout << x;
  cout << endl;
  /*
  ai
  0 -
  1 -
  2 2!
  3 3!
  4 4! / 3! * 2! * 2!
  5 5!
  6 6! / 5! * 3!
  7 7!
  8 8! / 7! * 2! * 2! * 2! 
  9 9! / 7! * 3! * 3! * 2!
  */
  return 0;
}
