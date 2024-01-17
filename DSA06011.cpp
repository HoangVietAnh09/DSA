#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[10004];
        for(int i = 0; i < n; i++) cin >> a[i];
        ll min = 1e12;
        ll res;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(abs(a[i] + a[j]) < abs(min)){
                    min = a[i] + a[j];
                }
            }
        }
        cout << min << endl;
        

    }
    return 0;
}