#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, int> mp;
        for(auto c : s){
            mp[c]++;
        }
        bool isOK = true;
        for(auto x : mp){
            if(x.second*2-1 > s.size()){
                cout << -1 << endl;
                isOK = false;
                break;
            }
        }
        if(isOK) cout << 1 << endl;

    }
    return 0;
}