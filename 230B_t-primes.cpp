#include <bits/stdc++.h>
using namespace std;
#define max3(a, b, c) max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c) min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define ctrl() printf("\nxxxxxxxxxxxxxxxxxxxxxxx\n")
#define tab '\t'
#define repeat(a) for(int __idx__ = 0; __idx__ < a; __idx__++)
#define until(a) while(!(a))
#define ll long long

const long long INF  = 1e18;
const ll N = 1e6;

int primes[N];

int sieve(){
  for(ll i = 0; i < N; i++) primes[i] = 1;
  primes[1] = 0;

  for(ll i = 2; i * i < N; i++)
    if(primes[i])
      for(ll j = 2 * i; j < N; j += i)
        primes[j] = 0;
}

int main(){
  sieve();

  ll n;
  cin >> n;
  while(n--){
    ll x;
    cin >> x;
    ll sq = sqrt(x); 
    if(sq * sq == x && primes[sq]){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }
  }
  
  
  
  return 0;
}
