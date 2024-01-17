#include <bits/stdc++.h>
using namespace std;
int n, a[10004], ok;

void sinh(){
    int i = n-1;
    while(i >= 1 && a[i] > a[i+1]){
        i--;
    }
    if(i == 0){
        for(int i = 1; i <= n; i++){
            a[i] = i;
        }
    }else{
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        int l = i+1, r = n;
        while(l < r){
            swap(a[l], a[r]);
            l++, r--;
        }
    }

}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
        sinh();
        for(int i = 1; i <= n; i++) cout << a[i] << ' ';
        cout << endl;
    }
    return 0;
}