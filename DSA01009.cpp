#include <bits/stdc++.h>
using namespace std;
int n, k, ok, cnt;
vector<int> a;
vector<string> res;
void khoiTao(){
    for(int i = 1; i <= n; i++) a[i] = 0;
}
void sinh(){
    int i = n;
    while(a[i] == 1){
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else{
        a[i] = 1;
    }
}
int main(){
    cin >> n >> k;
    bool check = false;
    a.resize(n+1);
    khoiTao();
    ok = 1;
    while(ok){
        string s = "";
        for(int i = 1; i <= n; i++){
            if(a[i] == 0) s += 'A';
            else s += 'B';
        }
        string tmp(k, 'A');
        int pos = s.find(tmp, 0);
        if(pos != -1){
            string check = s.substr(pos+1);
            if(check.find(tmp, 0)){
                cnt++;
                res.push_back(s);
            }

        }
        sinh();
    }
    cout << cnt << endl;
    for(int i = 0; i < res.size(); i++) cout << res[i] << endl;
    return 0;
}