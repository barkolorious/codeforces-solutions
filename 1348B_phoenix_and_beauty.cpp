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
  while (t--){
    int n, k;
    cin >> n >> k;
    int arr[n];
    set<int> s;
    repeat(n) cin >> arr[__idx__], s.insert(arr[__idx__]);

    if(s.size() > k) cout << "-1" << endl;
    else{
      for(int i = 1; i <= n; i++){
        if(s.size() == k) break;
        s.insert(i);
      }

      cout << n * k << endl;
      for(int i = 0; i < n; i++) for(auto it : s) cout << it << " ";
      cout << endl;
    }

  }
  
  
  
  
  return 0;
}
