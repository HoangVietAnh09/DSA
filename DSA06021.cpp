#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n, x;
        int a[10004];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << binary_search(a, a+n, x) << endl;

    }
    return 0;
}