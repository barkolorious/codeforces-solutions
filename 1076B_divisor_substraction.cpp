#include <bits/stdc++.h>
using namespace std;

int main(){
  long long n; cin >> n; 
  long long ans;

  for(long long i = 2; i <= sqrt(n); i++){
    if(!(n % i)){
      n -= i;
      ans = (n / 2) + 1;
      cout << ans << endl;
      return 0;
    }
  }
  cout << 1;
  
  return 0;
}