#include <bits/stdc++.h>
using namespace std;
void solve(int n){
    for(int i = n/7; i >= 0; i--){
        int remain = n-7*i;
        if(remain%4 == 0){
            int a = remain/4;
            cout << string(a, '4');
            cout << string(i, '7');
            return;
        }
    }
    cout << -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solve(n);
        cout << endl;
        
    }
    return 0;
}