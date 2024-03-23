#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int c[1004][1004];
        for(int i = 0; i <= 1000; i++){
            for(int j = 0; j <= i; j++){
                if(j == 0 || j == i){
                    c[i][j] = 1;
                }
                else{
                    c[i][j] = (c[i-1][j-1] + c[i-1][j])%mod;
                }
            }
        }
        cout << c[n][k] << endl;
    }
    return 0;
}