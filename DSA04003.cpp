#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 123456789
ll dac(ll n, ll k){
    if(k == 0) return 1;
    ll x = dac(n, k/2);
    if(k%2 == 0) return (x*x)%mod;
    return (n*((x*x)%mod))%mod;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << dac(2, n-1) << endl;
    }
    return 0;
}