#include <bits/stdc++.h>
using namespace std;
int n, ok, a[10004];
bool check(int a[], int n){
    int l = 1, r = n;
    while(l <= r){
        if(a[l] != a[r]) return false;
        l++, r--;
    }
    return true;
}
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
    if(i == 0){
        ok = 0;
    }else{
        a[i] = 1;
    }

}
int main(){
    cin >> n;
    khoiTao();
    ok = 1;
    while(ok){
        if(check(a, n)){
            for(int i = 1; i <= n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        sinh();
    }
    return 0;
}
