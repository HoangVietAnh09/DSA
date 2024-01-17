#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            mp[x]++;
        }
        bool check = false;
        for(auto x : mp){
            if(x.first == k){
                cout << x.second << endl;
                check = true;
            }
        }
        if(check == false){
            cout << -1 << endl;
        }
        
    }
    return 0;
}