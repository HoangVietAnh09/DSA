#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[100004];
        ll s = 0, s1 = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s += a[i];
        }
        sort(a, a+n);
        int p = min(k, n-k);
        for(int i = 0; i < p; i++){
            s1 += a[i];
        }
        cout << s - 2*s1 << endl;

        
    }
    return 0;
}