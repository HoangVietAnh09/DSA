#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll fib[10004];
int solve(ll n, ll k){
    if(n == 0) return 1;
    if(n == 1) return 0;
    if(k <= fib[n-2]) return solve(n-2, k);
    return solve(n-2, fib[n-2]) + solve(n-1, k-fib[n-2]);

}
int main(){
    fib[0] = 1;
    fib[1] = 1;
    for(int i = 2; i <= 45; i++) fib[i] = fib[i-1] + fib[i-2];
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << solve(n, k) << endl;
        
    }
    return 0;
}