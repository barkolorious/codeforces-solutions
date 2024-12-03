#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;
#define ll long long

int main(){
  int n;
  cin >> n;
  int b[n];
  ll mx = INT_MIN;
  ll mn = INT_MAX;
  ll maxCount = 0;
  ll minCount = 0;
  for(int i = 0; i < n; i++){
    cin >> b[i];
    if(b[i] > mx){
      mx = b[i];
      maxCount = 1;
    }else if(b[i] == mx){
      maxCount++;
    }

    if(b[i] < mn){
      mn = b[i];
      minCount = 1;
    }else if(b[i] == mn){
      minCount++;
    }
  }
  
  cout << mx - mn << " " << ((mx == mn) ? maxCount * (maxCount - 1) / 2 : maxCount * minCount);
  
  return 0;
}
