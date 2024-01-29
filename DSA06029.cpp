#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<vector<int>> b; 
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        int key = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        vector<int> tmp(a.begin(), a.begin()+i + 1);
        b.push_back(tmp);

    }
    for(int i = b.size()-1; i >= 0; i--){
        cout << "Buoc " << i << ": ";
        for(int j = 0; j < b[i].size(); j++) cout << b[i][j] << " ";
        cout << endl;
    }
    return 0;
}
