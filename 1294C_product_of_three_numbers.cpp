#include <bits/stdc++.h>
using namespace std;

void func(int n){
  for(int i = 2; i * i <= n; i++){
    if(n % i == 0){
      int d = n / i;
      for(int j = i + 1; j * j < d; j++){
        if(d % j == 0){
          printf("YES\n%d %d %d\n", i, j, d / j);
          return;
        }
      }
    }
  }
  cout << "NO" << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int x; 
    cin >> x;
    func(x);
  }
}