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
  int n, l;
  cin >> n >> l;

  vector<double> lanterns(n);
  for(int i = 0; i < n; i++) cin >> lanterns[i];
  sort(lanterns.begin(), lanterns.end());

  if(n == 1){
    double start = lanterns[0];
    double end = l - lanterns[n - 1];
    double ans = max(start, end);
    cout << fixed << setprecision(10);
    cout << ans;
    return 0;
  }

  vector<double> gaps(n-1);
  for(int i = 0; i < n - 1; i++){
    gaps[i] = lanterns[i + 1] - lanterns[i];
  }  

  sort(gaps.begin(), gaps.end(), greater<double>());

  double start = lanterns[0];
  double end = l - lanterns[n - 1];
  double ans = max3(gaps[0] / 2, start, end);
  cout << fixed << setprecision(10);
  cout << ans;

  /*
  5 20
  1 6 10 15 18 
  */
  
  return 0;
}
