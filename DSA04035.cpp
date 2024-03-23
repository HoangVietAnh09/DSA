#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
ll solve(ll a, ll b){
    if(b == 0) return 1;
    ll res = solve(a, b/2);
    if(b%2 == 0) return (res*res)%mod;
    return (a*((res*res)%mod))%mod;
}

int main(){
    ll a, b;
    while(cin >> a >> b){
        if(a == 0 && b == 0) break;
        cout << solve(a, b) << endl;
    }
    return 0;
}