#include <bits/stdc++.h>
using namespace std;
int n, a[10004], ok;
void khoiTao(){
    for(int i = 1; i <= n; i++){
        a[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(a[i] == 1 && i >= 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else{
        a[i] = 1;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        khoiTao();
        cin >> n;
        ok = 1;
        int cnt = 0;
        while(ok){
            cnt ++;
            for(int i = 1; i <= n; i++){
                if(a[i] == 0) cout << 6;
                else cout << 8;
            }
            cout << ' ';
            sinh();
        }
        cout << endl;


    }
    return 0;
}