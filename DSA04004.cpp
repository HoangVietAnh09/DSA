#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll half(ll n, ll k){
    ll l = pow(2, n)-1;
    ll mid = l/2 + l%2;
    if(mid == k) return n;
    else if(mid > k) return half(n-1, k);
    else return half(n-1, k-mid);
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << half(n, k) << endl;
        
    }
    return 0;
}