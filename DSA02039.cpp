#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> v;
vector<vector<int>> res;

void backTrack(int i, int cur){
    if(cur == 0){
        res.push_back(v);
        return;
    }
    for(int j = i; j >= 1; j--){
        if(cur >= j){
            v.push_back(j);
            backTrack(j, cur-j);
            v.pop_back();
        }
    }
    
}
int main(){
    int t;
    cin >> t;
    while(t--){
        v.clear();
        res.clear();
        cin >> n;
        backTrack(n, n);
        cout << res.size() << endl;
        for(int i = 0; i < res.size(); i++){
            cout << "(";
            for(int j = 0; j < res[i].size(); j++){
                cout << res[i][j];
                if(j != res[i].size()-1) cout << " ";
            }
            cout << ") ";
        }
        cout << endl;

    }
    return 0;
}