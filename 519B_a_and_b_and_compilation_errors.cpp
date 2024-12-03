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

  int A[n];
  int B[n - 1];
  int C[n - 2];
  for(int i = 0; i < n; i++) cin >> A[i];
  for(int i = 0; i < n - 1; i++) cin >> B[i];
  for(int i = 0; i < n - 2; i++) cin >> C[i];

  sort(A, A + n);
  sort(B, B + n - 1);
  sort(C, C + n - 2);
  
  int ans = A[n - 1];
  for(int i = 0; i < n - 1; i++)
    if(A[i] != B[i]) {ans = A[i]; break;}
  cout << ans << endl;

  ans = B[n - 2];
  for(int i = 0; i < n - 2; i++)
    if(B[i] != C[i]) {ans = B[i]; break;}
  cout << ans << endl;
  
  return 0;
}
