#include <bits/stdc++.h>
using namespace std;
int n, k, ok;
vector<vector<int>> v;
vector<int> a;

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
    ok = 1;
    int dem = 0;
    v.push_back({1, 2, 3});
    while(ok){
        int cnt = 0;
        for(int i = 1; i <= n-2; i++){
            if(a[i] == 0 && a[i+1] == 0 && a[i+2] == 0){
                cnt++;
            }
        }
        if(cnt == 1){
            dem++;
            v.push_back(a);
        }
        sinh();
    }
    cout << dem;
    for(int i = 0; i < v.size(); i++){
        for(int j = 1; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}