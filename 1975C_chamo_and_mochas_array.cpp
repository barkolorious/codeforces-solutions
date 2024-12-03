#include <bits/stdc++.h>
using namespace std;

int main(){

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n]; vector<pair<int, int>> sorted;

		for(int i = 0; i < n; i++) cin >> a[i];

		if(n == 2){
			cout << min(a[0], a[1]) << endl;
		} else{
			int ans = min(a[0], a[1]);
			for(int i = 0; i < n - 2; i++){
				vector<int> temp;
				for(int j = 0; j < 3; j++) temp.push_back(a[i + j]);
				sort(temp.begin(), temp.end());
				ans = max(ans, temp[1]);
			}
			cout << ans << endl;
		}
	}

	return 0;
}