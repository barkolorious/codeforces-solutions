#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))

const long long INF  = 1e18;

void quickSort(int* l, int* r){
  if(r - l <= 1) return;
  int* p = r - 1;
  int* i = l - 1;
  for(int* j = l; j < r; j++){
    if(*j < *p){
      i++;
      swap(*i, *j);
    }
  } 
  i++;
  swap(*i, *p);

  quickSort(l, i);
  quickSort(i + 1, r);
}

int main(){
  int n, m;
  cin >> n;
  int boys[n];
  for(int i = 0; i < n; i++) cin >> boys[i];
  cin >> m;
  int girls[m];
  for(int i = 0; i < m; i++) cin >> girls[i];

  quickSort(boys, boys + n);
  quickSort(girls, girls + m);

  int* b = boys;
  int* g = girls;

  int ans = 0;
  while(b < boys + n && g < girls + m){
    if(abs(*b - *g) <= 1) {ans++; b++; g++;}
    else if(*b < *g) b++;
    else if(*g < *b) g++;
  }
  
  cout << ans;
  
  return 0;
}
