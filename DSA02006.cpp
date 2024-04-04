#include <bits/stdc++.h>
using namespace std;
int n, k, a[10004], x[1004], check;
void backTrack(int sum, int i, int pos){
    if(sum == k){
        cout << "[";
        for(int j = 1; j < i; j++){
            cout << x[j];
            if(j == i-1) cout << "]";
            else cout << " ";
        }
        check = 1;
        return;
    }
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= k){
            x[i] = a[j];
            backTrack(sum + a[j], i+1, j+1);
        }
    }
}
int main(){
    // freopen("testcase.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+n+1);
        check = 0;
        backTrack(0, 1, 1);
        if(check == 0) cout << "-1\n";
        else cout << endl;
    }
    return 0;
}