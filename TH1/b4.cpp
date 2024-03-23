#include <bits/stdc++.h>
using namespace std;
int n, k, a[1004];
bool check(){
    int l = 1, r = k;
    while(l < r){
        if(a[l] != a[r]) return false;
        l++, r--;
    }
    return true;
}
void in(){
    if(check()){
        for(int i = 1; i <= k; i++){
            cout << a[i];
        }
        cout << " ";
    }
}
void backTrack(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == k) in();
        else backTrack(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(k = 2; k <= n; k += 2){
            backTrack(1);
        }
        cout << endl;
    }
    return 0;
}