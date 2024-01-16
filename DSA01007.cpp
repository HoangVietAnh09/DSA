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
    while(i >= 1 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        ok = 1;
        khoiTao();
        while(ok){
            for(int i = 1; i <= n; i++){
                (a[i] == 0) ? cout << 'A' : cout << 'B';
            }
            cout << ' ';
            sinh();
        }
        cout << endl;
    }
    return 0;
}