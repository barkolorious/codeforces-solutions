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

  int* pivot = r - 1;
  
  int* i = l - 1;
  int* j = r - 1;
  while(i < j){
    while(*(++i) < *pivot) ;
    while(j >= l && *(--j) > *pivot) ;
    if(i < j) swap(*i, *j);
  }
  swap(*i, *(r - 1));

  quickSort(l, i);
  quickSort(i + 1, r);

  return;
}

int main(){
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }

  quickSort(arr, arr + n);
  
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  
  return 0;
}
