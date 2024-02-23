#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // freopen("C:\\Users\\Admin\\Documents\\Code\\C++\\test.txt", "r", stdin);
    int x;
    string s;
    vector<int> v;
    while(cin >> s){
        if(s == "push"){
            cin >> x;
            v.push_back(x);
        }else if(s == "pop"){
            if(!v.empty()){
                v.pop_back();
            }
        }else if(s == "show"){
            if(v.empty()) cout << "empty" << endl;
            else{
                for(int x : v) cout << x << " ";
                cout << endl;
            }
        }
    }
    return 0;
}
