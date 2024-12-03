#include <bits/stdc++.h>
using namespace std;

const int lim = 1e5 + 5;
int trie[lim][26];
int total = 1, k;

int Build(string s){
    int node = 1;
    for(int i = 0; i < s.length(); i++){
        if(trie[node][s[i] - 'a'] == 0){
            trie[node][s[i] - 'a'] = ++total;
        }
        node = trie[node][s[i] - 'a'];
    }
    return node;
}

bool win_dfs(bool player, int node){
    for(int i = 0; i < 26; i++)
        if(trie[node][i])
            if(win_dfs(!player, trie[node][i]) == player) return player;

    return !player;
}

bool loss_dfs(bool player, int node){
    bool flag = false;
    for(int i = 0; i < 26; i++){
        if(trie[node][i]){
            if(loss_dfs(!player, trie[node][i]) == player) return player;
            flag = true;
        }
    }

    if(!flag) return player;
    else return !player;
}

int main(){
    int n; cin >> n >> k;
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        Build(s);
    }

    bool can_win = win_dfs(0, 1) == 0;
    bool can_lose = loss_dfs(0, 1) == 0;

    if(can_win && can_lose) cout << "First\n";
    else if(can_win && !can_lose) cout << ((k % 2) ? "First\n" : "Second\n");
    else if(!can_win && can_lose) cout << "Second\n";
    else cout << "Second\n";

	return 0;
}
/*
5 6
abas
dsfdf
abacaba
dartsidius
kolobok
*/