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
  long long n, m;
  cin >> n >> m;

  queue<long long> tasks;
  for(int i = 0; i < m; i++){
    long long t; cin >> t;
    tasks.push(t);
  }

  long long last = 1;
  long long time = 0;
  while(!tasks.empty()){
    long long task = tasks.front(); tasks.pop();  
    time += (task - last + n) % n;
    last = task;
  }
  
  cout << time;
  
  return 0;
}
