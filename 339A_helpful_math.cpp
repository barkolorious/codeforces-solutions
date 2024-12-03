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
  string str;
  cin >> str;
  vector<char> nums;

  for(int i = 0; i < str.length(); i += 2){
    nums.push_back(str[i]);
  }

  sort(nums.begin(), nums.end());

  str = "";

  for(int i = 0; i < nums.size(); i++){
    str += nums[i];
    str += (i != nums.size() - 1) ? "+" : "";
  }
  
  cout << str;
  
  return 0;
}
