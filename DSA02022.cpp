#include <bits/stdc++.h>
using namespace std;
int n = 8;

void backTrack(int i, string res, int pos){
    if(i == n){
        cout << res << endl;
        return;
    }
    for(int j = 0; j <= 1; j++){
        if(j == 0) res += "0";
        else res += "2";
        backTrack(i+1, res, j+1);
    }
}
int main(){
    backTrack(1, "", 1);
    return 0;
}