#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[100004];
        for(int i = 0; i < n; i++) cin >> a[i];
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(a[i] + a[j] == k) cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}