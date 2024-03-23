#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int check = true;
        vector<int> v1(n), v2(n-1);
        for(int &x : v1) cin >> x;
        for(int &x : v2) cin >> x;
        for(int i = 0; i < n-1; i++){
            if(v1[i] != v2[i]){
                cout << i+1 << endl;
                check = false;
                break;
            }
        }
        if(check == true){
            cout << n << endl;
        }
    }
    return 0;
}