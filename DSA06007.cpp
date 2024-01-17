#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[1004], b[1004];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        } 
        sort(a, a+n);
        int l = 0, r = n-1;
        while(a[l] == b[l]) l++;
        while(a[r] == b[r] && r > l) r--;
        cout  << l+1 << " " << r+1 << endl;

    }
    return 0;
}