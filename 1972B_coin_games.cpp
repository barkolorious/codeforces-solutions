#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int u_count = 0;
        for(char c : s) if(c == 'U') u_count++;
        if(u_count & 1) cout << "YES\n";
        else cout << "NO\n";
    }
}