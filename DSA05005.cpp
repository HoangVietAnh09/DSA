#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, a[100004], f[100004];
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= n; i++){
            f[i] = 1;
            for(int j = 1; j < i; j++){
                if(a[i] >= a[j]) f[i] = max(f[i], f[j]+1);
            }
        }
        cout << n - *max_element(f+1, f+n+1) << endl;
    }
    return 0;
}