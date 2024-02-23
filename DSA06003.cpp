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
        int cnt = 0;
        for(int i = 0; i < n; i++) cin >> v[i];
        for(int i = 0; i < n; i++){
            int tmp = i;
            for(int j = i + 1; j < n; j++){
                if(v[j] < v[tmp]) tmp = j;
            }
            if(tmp != i){
                cnt++;
                swap(v[tmp], v[i]);
            }
        }
        cout << cnt << endl;

    }
    return 0;
}