#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int a[100004];
    int f[100004];
    for(int i = 1; i <= n; i++) cin >> a[i];
    int res = 1;
    for(int i = 1; i <= n; i++){
        f[i] = 0;
        for(int j = 0; j < i; j++){
            if(a[j] < a[i]){
                f[i] = max(f[i], f[j]+1);
            }
            res = fmax(res, f[i]);
        }
    }
    return 0;
}