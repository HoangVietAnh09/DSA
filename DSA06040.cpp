#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        bool check2 = false;
        bool check3 = false;

        map<ll, int> mp;
        for(int i = 0; i < a; i++){
            ll x; cin >> x;
            mp[x] = 1;
        }
        for(int i = 0; i < b; i++){
            ll x; cin >> x;
            if(mp[x] == 1){
                mp[x] = 2;
                check2 = true;
            }
        }
        for(int i = 0; i < c; i++){
            ll x; cin >> x;
            if(mp[x] == 2){
                mp[x] = 3;
                check3 = true;
            }
        }
        if(check2 == false || check3 == false){
            cout << -1;
        }else{
            for(auto x : mp){
                if(x.second == 3){
                    cout << x.first << " ";
                }
            }
        }
        cout << endl;

    }
    return 0;
}
