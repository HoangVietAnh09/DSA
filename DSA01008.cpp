#include <bits/stdc++.h>
using namespace std;
int n, k, a[10004];
void in(){
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 1) cnt++;
    }
    if(cnt == k){
        for(int i = 1; i <= n; i++) cout << a[i];
        cout << endl;
    }
}

void backTrack(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n) in();
        else backTrack(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        backTrack(1);        
    }
    return 0;
}