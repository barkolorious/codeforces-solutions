#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;

bool isLucky(int x){
  int t = x;
  while(t > 0){
    if(t % 10 != 4 && t % 10 != 7) return false;
    t /= 10;
  }
  return true;
}

int main(){
  int n;
  cin >> n;
  bool arr[n+1] = {0};

  for(int i = 1; i <= n; i++){
    if(!arr[i]){
      arr[i] = isLucky(i);
      if(arr[i])
        for(int j = 2 * i; j <= n; j+=i)
          arr[j] = true;
    }
  }

  if(arr[n]) cout << "YES";
  else cout << "NO";
  
  return 0;
}
