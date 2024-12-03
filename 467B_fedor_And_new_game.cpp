#include <bits/stdc++.h>
using namespace std;

#define fi() freopen("i.txt","r", stdin)
#define fo() freopen("o.txt","w", stdout)
#define fri(x) freopen(x,"r", stdin)
#define fro(x) freopen(x,"w", stdout)
#define met(a,b) memset(a,b,sizeof a);
 
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)

#define all(a) a.begin(), a.end()
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define until(a) while(!(a))
 
const long long INF  = 1e18;
 
//------bitmask operations------//
#define setbit(x, j) x |= (1<<j)
#define removebit(x, j) x &= ~(1<<j)
#define checkbit(x, j) ((x & (1<<j)) >> j)
#define flipbit(x, j) x ^= (1<<j)
#define lsb(x, t) t= (x & (-x) )
//------------------------------//
 
const int N = 1e5 + 7; 
const int mod = 1e9 + 7;

int countBits(int a){
  int count = 0;
  while(a){
    if(checkbit(a, 0)) count++;
    a >>= 1;
  }
  return count;
}

int main(){
  int n, m, k;
  cin >> n >> m >> k;
  int army[m + 1];
  for(int i = 0; i <= m; i++) cin >> army[i];

  int count = 0;
  int fedor = army[m];
  for(int i = 0; i < m; i++){
    if(countBits(army[i] ^ fedor) <= k) count++;
  }
  cout << count;
  
  return 0;
}