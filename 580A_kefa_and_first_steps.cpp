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

  vector<int> a(n);

  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  int maxLength = -1;

  for(int i = 0; i < n; i++){
    int lastIdx = i;

    if(maxLength > -1 && i + maxLength < n && a[i] > a[i + maxLength]) continue;

    if(maxLength > n - i) break;
    
    for(int j = i; j < n - 1; j++){
      if(a[j] > a[j + 1]){
        break;
      }
      lastIdx = j + 1;
    }

    maxLength = max(maxLength, lastIdx - i + 1);

    if(maxLength == n) break;
  }
  
  cout << maxLength;
  
  
  return 0;
}
