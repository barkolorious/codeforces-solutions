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
  int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];

  bool sorted = true;
  for(int i = 0; i < n - 1; i++){
    if(arr[i] > arr[i + 1]) {sorted = false; break;}
  }
  if(sorted){
    cout << "yes\n" << 1 << " " << 1;
    return 0;
  }

  int decs = -1;
  int dece = -1;
  for(int i = 0; i < n - 1; i++){
    if(decs != -1){
      if(arr[i] < arr[i + 1]){
        dece = i;
        break;
      }
    }else{
      if(arr[i] > arr[i + 1]){
        decs = i;
      }
    }
  }  
  if(decs == -1) decs = 0;
  if(dece == -1) dece = n - 1;
  int l(decs), r(dece);
  while(l < r){
    swap(arr[l], arr[r]);
    l++;
    r--;
  }

  sorted = true;
  for(int i = 0; i < n - 1; i++){
    if(arr[i] > arr[i + 1]) {sorted = false; break;}
  }
  if(sorted) cout << "yes\n" << decs + 1 << " " << dece + 1;
  else cout << "no";

  return 0;
}
