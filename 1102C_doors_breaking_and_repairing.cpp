#include <bits/stdc++.h>
using namespace std;

int n, x, y; 
int a[100];

bool check(){
  int i = 0;
  while(!a[i]) i++;
  return a[i] <= x;
}

int main(){
  cin >> n >> x >> y;
  for(int i = 0; i < n; i++) cin >> a[i];
  if(x > y){
    cout << n << endl;
  } else{
    sort(a, a + n);
    while(check()){
      int i = 0;
      while(!a[i]) i++;
      a[i] = max(0, a[i] - x);
      i = 0;
      while(!a[i]) i++;
      a[i] += y;
      sort(a, a + n);
    }
    int ans = 0;
    for(int j = 0; j < n; j++) ans += !a[j];
    cout << ans << endl;
  }
  
  return 0;
}