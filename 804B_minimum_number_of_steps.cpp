#include <bits/stdc++.h>
#define llong long long
using namespace std;
const llong mod = 1e9+7;

llong pwr(llong x, llong y){
  llong ans = 1;
  while(y){
    if(y & 1){
      ans *= x;
      ans %= mod;
    }
    x *= x;
    x %= mod;
    y >>= 1;
  }
  return ans;
}

int main(){
  string s; cin >> s;
  llong ans = 0, curr = 0;
  for(char ch : s){
    if(ch == 'a') curr++;
    else{
      ans += (pwr(2, curr) - 1) % mod;
      ans %= mod;
    }
  }
  cout << ans << endl;
  return 0;
}

/*
aaab
aabba
abbaba
bbababa
bbbbaaba
bbbbabbaa
bbbbbbabaa
bbbbbbbbaaa 



















*/