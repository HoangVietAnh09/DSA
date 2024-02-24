#include <bits/stdc++.h>
using namespace std;
int n, k, cnt;
int a[10004], b[10004];
void in(){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i]*b[i];
    }
    if(sum == k){
        cnt++;
        for(int i = 1; i <= n; i++){
            if(b[i]) cout << a[i] << " ";
        }
        cout << endl;
    }
}
void backTrack(int i){
    for(int j = 0; j <= 1; j++){
        b[i] = j;
        if(i == n) in();
        else backTrack(i+1);
    }
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    backTrack(1);
    cout << cnt;


    return 0;
}