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
  int n, k;
  cin >> n >> k;
  
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int count = 0;
  for(int i = 0; i < n; i++){
    if(arr[i] <= 0) break;
    if(arr[i] >= arr[k - 1]) count++;
    else break;
  }
  
  cout << count << endl;
  
  
  return 0;
}
