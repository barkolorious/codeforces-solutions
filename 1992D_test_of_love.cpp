#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        string river; cin >> river;
        river = "L" + river + "L";

        bool ans = true; int curr = 0;
        for(int i = 0; i <= n; i++){
            bool is_log_within_reach = false;
            int idx;
            for(int j = i + 1; j <= min(n + 1, i + m); j++){
                if(river[j] == 'L'){
                    idx = j;
                    is_log_within_reach = true;
                    break;
                }
            }
            if(is_log_within_reach){
                i = idx - 1;
            } else{
                // gidebildiğim en uzak yer su mu
                // suysa sonraki loga olan uzaklığa bak
                // değilse patladı
                if(river[i + m] == 'W'){
                    bool can_go = false;
                    for(int j = i + m + 1; j <= n + 1; j++){
                        if(river[j] == 'C') break;
                        if(river[j] == 'L'){
                            if(curr + j - (i + m) > k){
                                break;
                            }
                            can_go = true;
                            curr += j - (i + m);
                            i = j - 1;
                            break;
                        }
                    }
                    if(!can_go){
                        ans = false; break;
                    }
                } else{ 
                    ans = false; break; // atlayabildiğim en uzak yer C patladım
                }
            }
        }
        if(ans) cout << "YES\n";
        else cout << "NO\n";
    }

	return 0;
}

/*
6
6 2 0
LWLLLW
6 1 1
LWLLLL
6 1 1
LWLLWL
6 2 15
LWLLCC
6 10 0
CCCCCC
6 6 1
WCCCCW

YES
YES
NO
NO
YES
YES
*/