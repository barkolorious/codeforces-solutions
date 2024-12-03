#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int a, b; cin >> a >> b;
		int ans = a;
		if((a - 1) % 4 == 0){
			if(b == (a-1));
			else if((b ^ (a-1)) == a) ans += 2;
			else ans++;
		} else if((a-1) % 4 == 1){
			if(b == 1);
			else if((b ^ 1) == a) ans += 2;
			else ans++;
		} else if((a-1) % 4 == 2){
			if(b == a);
			else if((b ^ a) == a) ans += 2;
			else ans++;
		} else if((a-1) % 4 == 3){
			if(b == 0);
			else if((b ^ 0) == a) ans += 2;
			else ans++;
		}// xor = 0 -> +2
		cerr << ':';
		cout << ans << endl;
	}

	return 0;
}

/*
5
1 1
2 1
2 0
1 10000
2 10000

3
2
3
2
3
*/