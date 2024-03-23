#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fib[10004];
char find(ll n, ll k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= fib[n-2]) return find(n-2, k);
    return find(n-1, k-fib[n-2]);

}
int main(){
    int t;
    cin >> t;
    fib[1] = 1;
    fib[2] = 1;
    for(int i = 3; i <= 100; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << find(n, k) << endl;

    }
    return 0;
}