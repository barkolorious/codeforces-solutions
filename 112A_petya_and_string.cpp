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
  string str1, str2;

  cin >> str1 >> str2;
  
  int flag = 0;

  for(int i = 0; i < str1.length(); i++){
    if(str1[i] < 97) str1[i] += 32;
    if(str2[i] < 97) str2[i] += 32;

    if(str1[i] < str2[i]){
      flag = -1; break;
    }else if(str1[i] > str2[i]){
      flag = 1; break;
    }
  }

  cout << flag;

  return 0;
}
