#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;
int days[101];

int main(){
  int n;
  cin >> n;
  int ans = 0;
  for(int i = 0; i < n; i++){
    int a;
    cin >> a;
    switch (a){
      case 0:
        ans++;
        break;
      case 1:
        if(days[i - 1] != 1) days[i] = 1;
        else ans++;
        break;
      case 2:
        if(days[i - 1] != 2) days[i] = 2;
        else ans++;
        break;
      case 3:
        if(days[i - 1] == 1) days[i] = 2;
        if(days[i - 1] == 2) days[i] = 1;
        break;
    }
  }
  
  cout << ans;
  
  return 0;
}
