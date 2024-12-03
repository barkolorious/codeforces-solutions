#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;

int sign(int x){
  if(x < 0) return -1;
  else return 1;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    long long sum = 0;
    for(int i = 0; i < n;){
      long long mx = INT_MIN;
      int s = sign(arr[i]);
      while(sign(arr[i]) == s && i < n){
        mx = max(mx, arr[i]);
        i++;
      }
      sum += mx;
    }
    cout << sum << endl;
  }

  return 0;
}

