#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a[1004];
    int b[1004];
    int c[1004];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n, greater<>());
    int cntb = 0, cntc = 0;
    for(int i = 0; i < n; i++){
        if(i%2 == 0) b[cntb++] = a[i];
        else c[cntc++] = a[i];
    }
    


    return 0;
}