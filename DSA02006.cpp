#include <bits/stdc++.h>
using namespace std;
<<<<<<< HEAD
int n, k, a[10004], x[1004], check;
void backTrack(int sum, int i, int pos){
    if(sum == k){
        cout << "[";
        for(int j = 1; j < i; j++){
            cout << x[j];
            if(j == i-1) cout << "]";
            else cout << " ";
        }
        check = 1;
        return;
=======
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
>>>>>>> 79be10ff219a4de6585e8732a045f96ad5f5034c
    }
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= k){
            x[i] = a[j];
            backTrack(sum + a[j], i+1, j+1);
        }
    }
}
int main(){
<<<<<<< HEAD
    // freopen("testcase.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sort(a+1, a+n+1);
        check = 0;
        backTrack(0, 1, 1);
        if(check == 0) cout << "-1\n";
        else cout << endl;
    }
=======
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
>>>>>>> 79be10ff219a4de6585e8732a045f96ad5f5034c
    return 0;
}