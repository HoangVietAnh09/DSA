#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n);
        map<ll, int> mp;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        bool check = false;
        for(int i = 0; i < n; i++){
            if(mp[a[i]] != 1){
                cout << a[i] << endl;
                check = true;
                break;
            }
        }
        if(!check) cout << "NO\n";
    }
    return 0;
}
