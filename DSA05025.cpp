#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll f[10004];
        f[1] = 1;
        f[2] = 2;
        f[3] = 4;
        for(int i = 4; i <= n; i++) f[i] = f[i-1] + f[i-2] + f[i-3];
        cout << f[n] << endl;
    }
    return 0;
}