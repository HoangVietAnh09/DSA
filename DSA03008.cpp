#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
}
int main(){
    int t;
    cin >> t;
    while(t--){
         int n; cin >> n;
        pair<int, int> a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i].first;
        }
        for (int i = 0; i < n; ++i) {
            cin >> a[i].second;
        }
        sort(a, a + n, cmp);
        int i = 0, res = 1;
        for(int j = 1; j < n; j++){
            if(a[i].second <= a[j].first){
                res++;
                i = j;
            }
        }
        cout << res << endl;
    }
    return 0;
}