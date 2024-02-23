#include <bits/stdc++.h>
using namespace std;
int a[1000004];
void sang(){
    for(int i = 0; i < 1000000; i++){
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for(int i = 2; i < 1000000; i++){
        if(a[i] == 1){
            for(int j = 2*i; j <= 1000000; j += i){
                a[j] = 0;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    sang();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool check = false;
        for(int i = 2; i <= n; i++){
            if(a[i] && a[n-i]){
                check = true;
                cout << i << " " << n-i;
                break;
            }
        }
        if(check == false) cout << -1;
        cout << endl;
    }
    return 0;
}