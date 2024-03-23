#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9+7;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[100004];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        ll r1 = 0, r2 = 0;
        for(int i = 0; i < n; i++){
            if(i%2 == 0){
                r1 = r1*10 + a[i];
            }else{
                r2 = r2*10 + a[i];
            }
        }
        cout << r1 + r2 << endl;
    }
    return 0;
}