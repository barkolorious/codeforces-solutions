#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        set<int> missing_left, missing_right;
        map<int, int> freq;
        int a[n];
        for(int i = 0; i < n; i++){
            missing_left.insert(i);
            missing_right.insert(i);
        }
        for(int& a_i : a){
            cin >> a_i;
            freq[a_i]++;
            missing_right.erase(a_i);
        }
        bool flag = false;
        for(int i = 0; i < n - 1; i++){
            if(--freq[a[i]] == 0) missing_right.insert(a[i]);
            missing_left.erase(a[i]);
            if(*missing_left.begin() == *missing_right.begin()){
                cout << 2 << endl << 1 << ' ' << i + 1 << endl << i + 2 << ' ' << n << endl;
                flag = true;
                break;
            }
        }
        if(!flag) cout << -1 << endl;

    }
	

	return 0;
}