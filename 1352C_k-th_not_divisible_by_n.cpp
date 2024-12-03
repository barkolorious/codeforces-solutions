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
  int t;
  cin >> t;

  while(t--){
    long long n, k;
    cin >> n >> k;
    long long p = ceil((double)k / (double)(n - 1)) - 1;
    long long r = k % (n - 1);
    if(r == 0) r = (n - 1);
    cout << (n * p) + r << endl;
  }
  
  return 0;
}

