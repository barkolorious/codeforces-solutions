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
    int n;
    cin >> n;
    int x;
    map<int,long long> mp;
    long long maxi = 0;
    for (int i = 0; i < n; ++i) {
      cin >> x;
      maxi += mp[x-i];
      mp[x-i]++;
    }
    cout<<maxi<<"\n";
  }
  
  return 0;
}
