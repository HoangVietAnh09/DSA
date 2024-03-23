#include <bits/stdc++.h>
using namespace std;
int n, k, a[10004], check[10004];
int cnt = 0;
void in(){
    if(cnt%k == 0){
         for(int i = 1; i <= n; i++) cout << a[i] << " ";
        cout << endl;
    }
   
}
void backTrack(int i){
    for(int j = 1; j <= n; j++){
        if(check[j] == 0){
            a[i] = j;
            check[j] = 1;
            if(i == n){
                cnt++;
                in();
            }
            else backTrack(i+1);
            check[j] = 0;
        }

    }
}
int main(){
    cin >> n >> k;
    backTrack(1);
    return 0;
}