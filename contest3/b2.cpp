#include <bits/stdc++.h>
using namespace std;
int n, a[10004], x[10004];

void in(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 1) cnt++;
    }
    if(cnt%2 == 0){
        for(int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << endl;
    }
}
void backTrack(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            in();
        }
        else backTrack(i+1);
    }
}
int main(){
    cin >> n;
    backTrack(1);
    return 0;
}