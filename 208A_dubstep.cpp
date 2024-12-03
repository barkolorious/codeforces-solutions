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
  string song;

  cin >> song;

  string original = "";

  int dubstep = -1;

  for(int i = 0; i < song.length(); i++){
    if(i + 2 < song.length() && song.substr(i, 3) == "WUB"){
      if(dubstep == 0) original += " ";
      dubstep = 1;
      i += 2; 
    }else{
      original += song[i];
      dubstep = 0;
    }

  }

  cout << original;
  
  
  return 0;
}
