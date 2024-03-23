#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        auto pos = lower_bound(a, a+n, k) - a;
        if(pos == n || a[pos] != k) cout << "NO\n";
        else cout << pos+1 << endl;

    }
    return 0;
}