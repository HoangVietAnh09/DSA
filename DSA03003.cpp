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
        int a[100004];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        ll res = 0;
        for(int i = 0; i < n; i++){
            res = (res + i*a[i])%mod;
        }
        cout << res << endl;
    }
    return 0;
}