#include <bits/stdc++.h>
using namespace std;
int n, m, a[10004], b[1004];
bool exist;
void in(){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i]*b[i];
    }
    if(sum == m){
        exist = true;
        cout << "[";
        int check = 0;
        for(int i = 1; i <= n; i++){
            check += a[i]*b[i];
            if(a[i] && check != m){
                cout << b[i] << " ";
            }else if(a[i]){
                cout << b[i] << "] ";
            }
        }
    }
    
}
void backTrack(int i){
    for(int j = 1; j >= 0; j--){
        a[i] = j;
        if(i == n) in();
        else backTrack(i+1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i = 1; i <= n; i++) cin >> b[i];
        sort(b+1, b+n+1);
        backTrack(1);
        if(!exist){
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}