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
  int even = 0;
  int arr[n];

  for(int i = 0; i < n; i++){
    cin >> arr[i];
    even += (arr[i] % 2 == 0);
  }

  if(even == 1){
    for(int i = 0; i < n; i++){
      if(arr[i] % 2 == 0){
        cout << i + 1;
        break;
      }
    }
  }else{
    for(int i = 0; i < n; i++){
      if(arr[i] % 2 == 1){
        cout << i + 1;
        break;
      }
    }
  }
  
  
  
  return 0;
}
