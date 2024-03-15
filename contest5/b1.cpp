#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[10004], res[10004];
    int cnt = 1;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
        res[i] = 0;
        for(int j = 0; j < i; j++){
            if(a[j] < a[i]){
                res[i] = fmax(res[i], res[j]+1);
            }
        }
        cnt = fmax(cnt, res[i]);
    }
    cout << cnt;
    return 0;
}