#include <bits/stdc++.h>
using namespace std;
int findMax(int n){
    int tmp;
    for(int i = 2; i <= sqrt(n); i++){
        while(n%i == 0){
            n /= i;
            tmp = i;
        }
    }
    if(n != 1) return n;
    return tmp;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        int res = 0;
        for(int i = l; i <= r; i++){
            res += findMax(i);
        }
        cout << res << endl;
    }
    return 0;
}