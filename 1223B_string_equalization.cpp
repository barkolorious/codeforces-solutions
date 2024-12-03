#include <bits/stdc++.h>
#define answer(c) cerr << "::"; cout << c
using namespace std;

int main(){
  int q; cin >> q;
  while(q--){
    string s, t; cin >> s >> t;
    int freqs[26]{}, freqt[26]{};
    for(char ch : s) freqs[ch - 'a']++;
    for(char ch : t) freqt[ch - 'a']++;
    bool flag = false;
    for(int i = 0; i < 26; i++){
      if(freqs[i] && freqt[i]){
        flag = true;
      }
    }
    if(flag) cout << "yes\n";
    else cout << "no\n";
  }
}