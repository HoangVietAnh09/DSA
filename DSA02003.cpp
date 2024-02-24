#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> res;
int a[10004][10004];
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};
void backTrack(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 4; k++){
        int i1 = i+dx[k];
        int j1 = j+dy[k];
        if(i1 >= 0 && i1 < n && j1 >= 0 && j1 <= n){
            if(a[i1][j1]){
                backTrack(i1, j1);
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(a[i][j] == 1){
                    backTrack(i, j);
                }
            }
        }
    }
    return 0;
}