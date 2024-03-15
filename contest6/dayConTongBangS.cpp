#include <bits/stdc++.h>
using namespace std;
int qhd(int a[], int n, int s){
    int f[s+1] = {0};
    f[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = s; j >= 0; j--){
            if(f[i] == 0){
                
            }
        }
    } 
}
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