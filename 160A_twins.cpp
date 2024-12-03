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

  vector<int> coins(n);
  int sum = 0;
  
  for(int i = 0; i < n; i++){
    cin >> coins[i];
    sum += coins[i];
  }

  int limit = sum / 2;

  sort(coins.begin(), coins.end());

  int count = 0;
  sum = 0;

  for(int i = n - 1; i >= 0; i--){
    sum += coins[i];
    count++;
    if(sum > limit) break;
  }
  
  cout << count;
  
  return 0;
}
