#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];
        int l = *min_element(v.begin(), v.end());
        int r = *max_element(v.begin(), v.end());
        int cnt = 0;
        for(int i = l; i <= r; i++){
            if(find(v.begin(), v.end(), i) == v.end()){
                cnt++;
            }
        }
        cout << cnt << endl;

    }
    return 0;
}