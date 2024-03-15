#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, a[10000], f[10000];
    memset(f, 0, sizeof(int));
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 1; i <= k; i++){
        for(int j = 0; j < n; j++){
            if(a[j] < i) f[i] += f[i]-f[i-a[j]];
        }
    }
    return 0;
}