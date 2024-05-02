#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int cnt = 0;
        int l = 0, r = n-1;
        while(l <= r){
            if(a[l] + a[r] == k){
                cnt++;
                l++, r--;
            }
            if(a[l] + a[r] < k){
                l++;
            }
            if(a[l] + a[r] > k){
                r--;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}