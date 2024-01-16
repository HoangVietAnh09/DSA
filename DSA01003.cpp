#include <bits/stdc++.h>
using namespace std;
int n, a[10004], ok;
void khoiTao(){
    for(int i = 1; i <= n; i++){
        a[i] = i;   
    }
}
void sinh(){
    int i = n-1;
    while(i >= 1 && a[i] > a[i+1]){
        i--;
    }
    

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
    }
    return 0;
}