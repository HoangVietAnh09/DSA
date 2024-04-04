#include <bits/stdc++.h>
using namespace std;
int x[1004], hang[1004], d1[1004], d2[1004], res;
int a[1004][1004];
void backTrack(int i){
    for(int j = 1; j <= 8; j++){
        if(hang[j] && d1[i-j+8] && d2[i+j-1]){
            x[i] = j;
            hang[j] = d1[i-j+8] = d2[i+j-1] = 0;
            if(i == 8){
                int sum = 0;
                for(int i = 1; i <= 8; i++){
                    sum += a[i][x[i]];
                }
                res = max(res, sum);

            }else backTrack(i+1);
            hang[j] = d1[i-j+8] = d2[i+j-1] = 1;
        }
    }
}
int main(){
    // freopen("testcase.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 1; i < 100; i++){
            hang[i] = d1[i] = d2[i] = true;
        }
        res = 0;
        backTrack(1);
        cout << res << endl;
    }
    return 0;
}