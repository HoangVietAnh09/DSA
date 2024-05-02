#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[1004][1004];
    vector<int> ds[1004];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
            if(a[i][j]){
                ds[i].push_back(j);
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(auto v : ds[i]){
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}