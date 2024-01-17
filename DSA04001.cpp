#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int modul = 1e9+7;
ll mod(ll a, ll b){
    if(b == 0) return 1;
    if(b == 1) return a;
    ll x = mod(a, b/2);
    if(b%2 == 0) return (x*x) % modul;
    return (x*x*a) % modul;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << mod(n, k) << endl;

    }
    return 0;
}