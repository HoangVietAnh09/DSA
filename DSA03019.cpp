#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(ll tu, ll mau){
    if(mau%tu == 0){
        cout << 1 << "/" << mau/tu << endl;
        return;
    }
    ll x = mau/tu+1;
    cout << 1 << "/" << x << " + ";
    ll maumoi = mau*x;
    ll tumoi = tu*x - mau;
    solve(tumoi, maumoi);

}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        solve(n, m);
    }
    return 0;
}