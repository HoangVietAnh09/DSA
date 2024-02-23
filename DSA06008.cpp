#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        int res = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(pow(a[i], b[j]) > pow(b[j], a[i])) res++;
            }
        }
        cout << res << endl;
        
    }
    return 0;
}
