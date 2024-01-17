#include <bits/stdc++.h>
using namespace std;
set<int> s;
void factor(int x){
    while(x != 0){
        int du = x%10;
        s.insert(du);
        x /= 10;
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[10004];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++){
            factor(a[i]);
        }
        for(int x : s) cout << x << " ";
        s.clear();
        cout << endl;

    }
    return 0;
}