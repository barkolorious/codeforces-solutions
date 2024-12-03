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
  map<string, int> names;
  for(int i = 0; i < n; i++){
    string name;
    cin >> name;
    if(names[name] == 0){
      cout << "OK" << endl;
    }else{
      string newName = name + to_string(names[name]);
      cout << newName << endl;
    }

    names[name]++;
  }
  
  
  
  return 0;
}
