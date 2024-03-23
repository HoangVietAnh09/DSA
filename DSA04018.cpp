#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        cout << lower_bound(a, a+n, 1) - a<< endl;

    }
    return 0;
}