#include <bits/stdc++.h>
#define llong long long
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  llong g[n + 1], v[m + 1], b[m + 1], a[m + 1], res[m + 1]{};
  llong have_learned[n + 1]{};
  for(int i = 1; i <= n; i++) cin >> g[i];
  for(int i = 1; i <= m; i++) cin >> v[i];
  for(int i = 1; i <= m; i++) cin >> b[i];

  for(int i = 1; i <= m; i++){
    a[i] = ((v[i] + res[i - 1] - 1) % n) + 1;
    llong rating = b[i], student = a[i];
    while(rating){
      if(!have_learned[student]) res[i]++;
      else if(have_learned[student] >= rating) break;
      have_learned[student] = rating;
      rating--;
      student = g[student];
    }
  }
  for(int i = 1; i <= m; i++){
    cout << res[i] << endl;
  }
  
  return 0;
}

/*
3 4
2 3 1
1 2 3 4
1 2 3 4
*/