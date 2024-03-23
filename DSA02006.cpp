#include <bits/stdc++.h>
using namespace std;
int n, m, a[10004], b[1004];
vector<string> v;
bool exist;
void in(){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += a[i]*b[i];
    }
    if(sum == m){
        string s = "";
        exist = true;
        s += "[";
        int check = 0;
        for(int i = 1; i <= n; i++){
            check += a[i]*b[i];
            if(a[i] == 1 && check != m){
                s += to_string(b[i]) + " ";
            }else if(a[i]){
                s += to_string(b[i]) + "]";
            }
        }
        v.push_back(s);
    }
    
}
void backTrack(int i){
    for(int j = 1; j >= 0; j--){
        a[i] = j;
        if(i == n) in();
        else backTrack(i+1);
    }
}
int main(){
    // int t;
    // cin >> t;
    // while(t--){
    //     cin >> n >> m;
    //     for(int i = 1; i <= n; i++) cin >> b[i];
    //     sort(b+1, b+n+1);
    //     backTrack(1);
    //     sort(v.rbegin(), v.rend());
    //     if(!exist){
    //         cout << -1;
    //     }else{
    //         for(auto x : v) cout << x << " ";
    //     }
    //     cout << endl;
    //     v.clear();
    // }
    v.push_back("5");
    v.push_back("10");
    sort(v.begin(), v.end());
    for(auto x : v) cout << x << " ";
    return 0;
}