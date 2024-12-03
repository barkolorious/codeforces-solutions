#include <bits/stdc++.h>
using namespace std;

int main(){
  int k; cin >> k;
  while(k--){
    int n; cin >> n;
    string s, t; cin >> s >> t;
    int num_of_diffs = 0;
    int places_of_diffs[n];
    for(int i = 0; i < n; i++){
      if(s[i] != t[i]){
        places_of_diffs[num_of_diffs] = i;
        num_of_diffs++;
      }
    }
    if(num_of_diffs == 2 &&
       s[places_of_diffs[0]] == s[places_of_diffs[1]] &&
       t[places_of_diffs[1]] == t[places_of_diffs[0]]){
        cout << "yes\n";
    } else{
      cout << "no\n";
    }
  }
}