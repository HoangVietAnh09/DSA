#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n), b(n), posc, posl;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i]%2 == 0){
            posc.push_back(a[i]);
            b[i] = 0;
        }else{
            posl.push_back(a[i]);
            b[i] = 1;
        }
    }
    sort(posc.begin(), posc.end(), greater<>());
    sort(posl.begin(), posl.end(), less<>());
    int cntc = 0, cntl = 0;
    for(int i = 0; i < n; i++){
        if(b[i]){
            cout << posl[cntl++] << " ";
        }else{
            cout << posc[cntc++] << " ";
        }
    }
    return 0;
}
