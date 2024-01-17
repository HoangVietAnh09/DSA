#include <bits/stdc++.h>
using namespace std;
int n, ok;
vector<pair<int, int>> vp;
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

void sinh(){
    int i = n-2;
    while(i >= 0 && vp[i].second > vp[i+1].second){
        i--;
    }
    if(i == -1){
       ok = 0;
    }else{
        int j = n-1;
        while(vp[i].second > vp[j].second) j--;
        swap(vp[i].second, vp[j].second);
        int l = i+1, r = n-1;
        while(l < r){
            swap(vp[l].second, vp[r].second);
            l++, r--;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    cin >> n;
    vp.resize(n);
    for(int i = 0; i < n; i++){
        cin >> vp[i].first;
        vp[i].second = i+1;
    }
    sort(vp.begin(), vp.end(), cmp);
    ok = 1;
    while(ok){
        for(int i = 0; i < n; i++){
            cout << vp[i].first;
        }
        sinh();
        cout << endl;
    }

    return 0;
}