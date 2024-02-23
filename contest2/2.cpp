#include <bits/stdc++.h>
using namespace std;
int n, a[100004], ok;


void sinh(){
    int i = n-1;
    while(i >= 1 && a[i] > a[i+1]){
        i--;
    }
    if(i == 0){
       ok = 0;
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
    cin >> n;
    for(int i = 1; i <= n; i++) a[i] = i;
    ok = 1;
    int cnt = 1;
    while(ok){
        cout << cnt++ << ": ";
        for(int i = 1; i <= n; i++){
            cout << a[i] << " ";
        }
        sinh();
        cout << endl;
    }
    return 0;
}