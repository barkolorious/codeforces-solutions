#include <bits/stdc++.h>
#define int long long
using namespace std;
const int mod= 1e9 + 7;

int pwr(int a, int b){
    int ans = 1;
    while(b){
        if(b & 1) ans = (ans % mod) * (a % mod) % mod;
        a = (a % mod) * (a % mod) % mod;
        b >>= 1;
    }
    return ans;
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        int l, r, k;
        cin >> l >> r >> k;
        int e = 9 / k;
        int ans = ((pwr(e + 1, r) % mod) - (pwr(e + 1, l) % mod) + mod) % mod;
        cerr << ':';
        cout << ans << endl;
    }

	return 0;
}

/*
6
0 1 4
0 2 7
1 2 1
1 2 3
582 74663 3
0 3 1

2
3
90
12
974995667
999
*/