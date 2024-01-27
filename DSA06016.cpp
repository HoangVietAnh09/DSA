#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        vector<ll> arr1(n);
        vector<ll> arr2(m);
        for(int i = 0; i < n; i++) cin >> arr1[i];
        for(int i = 0; i < m; i++) cin >> arr2[i];
        set<ll> s1(arr1.begin(), arr1.end());
        set<ll> s2(arr2.begin(), arr2.end());
        cout << (*s1.rbegin())*(*s2.begin()) << endl;

    }
    return 0;
}