#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct cv{
    int id;
    int deadline;
    int profit;
};
bool cmp(cv a, cv b){
    return a.profit > b.profit;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        bool used[10004];
        memset(used, false, sizeof(used));
        ll sum = 0;
        int cnt = 0;
        cv a[10004];
        for(int i = 0; i < n; i++){
            cin >> a[i].id >> a[i].deadline >> a[i].profit;
        }
        sort(a, a+n, cmp);
        for(int i = 0; i < n; i++){
            for(int j = a[i].deadline; j > 0; j--){
                if(used[j] == false){
                    used[j] = true;
                    sum += a[i].profit;
                    cnt++;
                    break;
                }
            }
        }
        
        cout << cnt << " " << sum << endl;
    }
    return 0;
}