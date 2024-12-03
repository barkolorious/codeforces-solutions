#include <bits/stdc++.h>
#define llong long long
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		llong side[3], k;
		cin >> side[0] >> side[1] >> side[2] >> k;
		sort(side, side + 3);
		llong ans = 0;
		for(int i = 1; i <= side[0]; i++){
			if(k % i) continue;
			for(int j = 1; j <= side[1]; j++){
				if((k / i) % j) continue;
				if(k / (i * j) <= side[2])
					ans = max(ans, (side[0] - i + 1) *
								   (side[1] - j + 1) *
								   (side[2] - (k / (i * j)) + 1));
			}
		}
		cerr << ":";
		cout << ans << endl;
	}
	

	return 0;
}

/*
7
3 3 3 8
3 3 3 18
5 1 1 1
2 2 2 7
3 4 2 12
4 3 1 6
1800 1800 1800 4913000000

8
2
5
0
4
4
1030301
*/