#include <bits/stdc++.h>
using namespace std;

int main(){
	int coins[5] = {15, 10, 6, 3, 1};
	

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int ans = INT_MAX;
		for(int ones = 0; ones < 3; ones++){
			for(int threes = 0; threes < 2; threes++){
				for(int sixes = 0; sixes < 3; sixes++){
					for(int tens = 0; tens < 3; tens++){
						int left = n - ones - threes * 3 - sixes * 6 - tens * 10;
						if(left >= 0 && left % 15 == 0){
							ans = min(ans, ones + threes + sixes + tens + left / 15);
						}
					}
				}
			}
		}
		cout << ans << endl;
	}
	

	return 0;
}
/*
14
1
2
3
5
7
11
12
14
16
17
18
20
98
402931328

1
2
1
3
2
2
2
3
2
3
2
2
8
26862090
*/