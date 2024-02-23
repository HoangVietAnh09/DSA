#include <bits/stdc++.h>
using namespace std;
int money[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int index = 9;
        int cnt = 0;
        for(int i = index; i >= 0; i--){
            while(n >= money[i] && n != 0){
                n -= money[i];
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}