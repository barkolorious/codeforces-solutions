#include <bits/stdc++.h>
#define int long long
using namespace std;

map<int, int> freq;

int solve(int sum){
    if(sum == 1){
        if(freq[sum]){
            freq[sum]--;
            return 1;
        }
        return 0;
    }
    if(freq[sum]){
        freq[sum]--;
        return true;
    }
    else return solve(sum / 2) && solve(sum - sum / 2);
}

int32_t main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        int sum = 0;
        freq.clear();
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
            freq[a[i]]++;
        }
        if(solve(sum)) cout << "YES\n";
        else cout << "NO\n";

    }
	

	return 0;
}