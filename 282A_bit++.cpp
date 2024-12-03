#include <bits/stdc++.h>
using namespace std;

const long long INF  = 1e18;

int main(){
  int n;
  cin >> n;

  int x = 0;

  for(int i = 0; i < n; i++){
    string command;
    cin >> command;

    if(command[1] == '+') x++;
    if(command[1] == '-') x--;
    
  }
  
  cout << x;
  
  return 0;
}
