#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;
ll reverse(ll n){
    ll res = 0;
    while(n != 0){
        res = res*10 + n%10;
        n /= 10;
    }
    return res;
}
ll devide(ll a, ll b){
    if(b == 0) return 1;
    ll x = devide(a, b/2);
    if(b%2 == 0) return (x*x)%mod;
    return (a*((x*x)%mod))%mod;

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll tmp = reverse(n);
        cout << devide(n, tmp) << endl;
    }
    return 0;
}
