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

  int count = 0;

  repeat(n){
    int sum = 0;
    for(int i = 0; i < 3; i++){
      int temp; cin >> temp;
      sum += temp;
    }

    if(sum >= 2) count++;
  }
  
  cout << count << endl;
  
  return 0;
}
