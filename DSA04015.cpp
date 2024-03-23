#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int a[n];
        for(int &x : a) cin >> x;
        int pos = upper_bound(a, a+n, x) - a;
        if(pos <= 0) pos = -1;
        cout << pos << endl;

    }
    return 0;
}