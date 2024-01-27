#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        bool check = false;
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                check = true;
                swap(a[j], a[j+1]);
            }
        }
        if(check){
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}