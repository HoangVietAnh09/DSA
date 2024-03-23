#include <bits/stdc++.h>
using namespace std;
int n, k, x[10004];
void in(){
    for(int i = 1; i <= k; i++){
        cout << x[i] << " ";
    }
    cout << endl;
}
void backTrack(int i){
    for(int j = x[i-1]; j <= n; j++){
        x[i] = j;
        if(i == k) in();
        else backTrack(i+1);
    }
}
int main(){

    cin >> n >> k;
    x[0] = 1;
    backTrack(1);
    return 0;
}