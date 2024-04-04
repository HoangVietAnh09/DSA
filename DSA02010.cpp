#include <bits/stdc++.h>
using namespace std;

int n, k, a[1004], x[1004], check = 1;
void backTrack(int i, int sum, int pos){
    if(sum == k){
        cout << "[";
        for(int j = 1; j < i; j++){
            cout << x[j];
            if(j == i-1) cout << "]";
            else cout << " ";
        }
        check = 0;
        return;
    }
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= k){
            x[i] = a[j];
            backTrack(i+1, sum+a[j], j); 
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+n+1);
        backTrack(1, 0, 1);
        if(check == 1) cout << "-1\n";
        else cout << endl;
    }
    return 0;
}