#include <bits/stdc++.h>
using namespace std;
int n, k, x[10004];
int cnt = 0;
bool check(int m){
    for(int i = 2; i <= sqrt(m); i++){
        if(m%i == 0) return 0;
    }
    return m > 1;
}
void in(){
    if(check(cnt)){
        cout << cnt << ": ";
        for(int i = 1; i <= k; i++){
            cout << x[i] << " ";
        }
        cout << endl;
    }
}
void backTrack(int i){
    for(int j = x[i-1]+1; j <= n-k+i; j++){
        x[i] = j;
        if(i == k){
            cnt++;
            in();
        }
        else backTrack(i+1);
    }
}
int main(){
    cin >> n >> k;
    x[0] = 0;
    backTrack(1);
    return 0;
}