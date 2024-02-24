#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a, b;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(i%2 == 0) a.push_back(x);
        else b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    for(int i = 0; i < b.size(); i++){
        cout << a[i] << " " << b[i] << " ";
    }
    if(n%2 == 1) cout << a.back();
    return 0;
}
