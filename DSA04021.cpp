#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll f[1004];
char find(ll n, ll k){
    if(n == 1) return '0';
    if(n == 2) return '1';
    if(k <= f[n-2]) return find(n-2, k);
    return find(n-1, k - f[n-2]);
}
int main(){
    int t;
    cin >> t;
    f[1] = f[2] = 1;
    for(int i = 3; i <= 93; i++){
        f[i] = f[i-1] + f[i-2];
    }
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << find(n, k) << endl;
    }
    return 0;
}