#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;
const long long N = 1e5 + 1;
int n, m, ans;
vector<int> adj[N];
bool cat[N];
bool visited[N];

void dfs(int idx, int c, int prev){
  if(visited[idx]) return;

  visited[idx] = true;
  if(!cat[idx]) c = 0;
  else {
    if(cat[prev]) c++;
    else c = 1;
  }
  
  bool flag = true;
  for(int v : adj[idx]) if(!visited[v]) {flag = false; break;}
  if(flag && c <= m) {ans++; return;}

  if(c > m) return;

  for(int v : adj[idx]){
    dfs(v, c, idx);
  }

}

int main(){
  cin >> n >> m;
  for(int i = 1; i <= n; i++) cin >> cat[i];

  for(int i = 0; i < n - 1; i++){
    int a, b;
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  dfs(1, 0, 1);

  cout << ans;
  
  return 0;
}
/*
12 1
1 1 0 1 0 0 1 0 0 0 0 1
1 2
1 3
1 4
2 5
2 6
3 7
3 8
3 9
4 10
4 11
4 12
*/








