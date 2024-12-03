#include <bits/stdc++.h>
using namespace std;

int main(){
  int t; cin >> t;
  while(t--){
    int n, m; cin >> n >> m;

    string init_str[n], curr_str[n-1];
    int init_total_freq[m][26]{}, curr_total_freq[m][26]{};
    int init_word_freq[n][26]{};

    for(int i = 0; i < n; i++){
      cin >> init_str[i];
      for(int j = 0; j < m; j++){
        init_total_freq[j][init_str[i][j] - 'a']++;
      }
    }
    for(int i = 0; i < n-1; i++){
      cin >> curr_str[i];
      for(int j = 0; j < m; j++){
        curr_total_freq[j][curr_str[i][j] - 'a']++;
      }
    }
    string ans = "";
    for(int i = 0; i < m; i++){
      for(int j = 0; j < 26; j++){
        if(init_total_freq[i][j] - curr_total_freq[i][j] == 1){
          ans += char(j + 'a');
          break;
        }
      }
    }
    cout << ans << endl;
  }
  
  return 0;
}