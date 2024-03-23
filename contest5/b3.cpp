#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[10004];
        int f[10004];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            f[i] = a[i];
        }
        int res = 0;
        f[1] = a[1];
        for(int i = 1; i <= n; i++){
            int max = 0;
            for(int j = 1; j <= i; j++){
                if(a[i] > a[j] && f[j] > max){
                    max = f[j];
                }
            }
            f[i] += max;
            if(res < f[i]) res = f[i];
        }
        cout << res << endl;
        
    }
    return 0;
}