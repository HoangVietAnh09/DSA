#include <bits/stdc++.h>
using namespace std;
int n, used[1004], a[1004];
vector<int> v;
void in(){
    for(int i = 1; i <= n; i++){
        cout << v[a[i]] << " ";
    }
    cout << endl;
}
void backTrack(int i){
    for(int j = 1; j <= n; j++){
        if(used[j] == 0){
            used[j] = 1;
            a[i] = j;
            if(i == n) in();
            else backTrack(i+1);
            used[j] = 0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    v.push_back(-1);
    for(int x : s) v.push_back(x);
    backTrack(1);
    return 0;
}