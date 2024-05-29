#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    vector<int> res;
    res.push_back(a[0] * a[1]);
    res.push_back(a[n - 1] * a[n - 2]);
    res.push_back(a[0] * a[1] * a[n - 1]);
    res.push_back(a[n - 1] * a[n - 2] * a[n - 3]);
    sort(res.rbegin(), res.rend());
    cout << res[0];
    return 0;
}