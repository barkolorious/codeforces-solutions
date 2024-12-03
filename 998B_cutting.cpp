#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, B;
  cin >> n >> B;
  int a[n];
  for(int& a_i : a) cin >> a_i;

  vector<pair<int, int>> cuts; //değerden sonraki boşluktan kes
  for(int i = 0; i < n - 1; i++){
    if(abs(a[i] - a[i+1]) <= B) cuts.push_back({i, abs(a[i] - a[i+1])});
  }

  int num_of_cuts = cuts.size();
  pair<int,int> dp[num_of_cuts + 1][B + 1]{}; // max number, last cut used

  for(int i = 0; i <= num_of_cuts; i++) dp[i][0] = {0, -1};
  for(int i = 0; i <= B; i++) dp[0][i] = {0, -1};

  for(int i = 1; i <= num_of_cuts; i++){
    for(int w = 1; w <= B; w++){
      if(w - cuts[i - 1].second < 0) {dp[i][w] = dp[i - 1][w]; continue;}

      int using_this_cut = dp[i - 1][w - cuts[i - 1].second].first + 1;
      int not_using_this_cut = dp[i - 1][w].first;

      if(using_this_cut >= not_using_this_cut){
        int even_count = 0, odd_count = 0;
        for(int x = dp[i - 1][w].second + 1; x <= cuts[i - 1].first; x++){
          if(a[x] & 1) odd_count++;
          else even_count++;
        }

        if(even_count == odd_count){
          dp[i][w].first = using_this_cut;
          dp[i][w].second = cuts[i - 1].first;
        } else{
          dp[i][w] = dp[i - 1][w];
        }
      } else{
        dp[i][w] = dp[i - 1][w];
      }
      
    }
  }
  cout << dp[num_of_cuts][B].first << endl;
  return 0;
}