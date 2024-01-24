#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int a[1004];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int minIdx;
    for(int i = 0; i < n-1; i++){
        minIdx = i;
        for(int j = i+1; j < n; j++){
            if(a[j] < a[minIdx]) minIdx = j;
        }
        swap(a[i], a[minIdx]);
        cout << "Buoc " << i+1 << ": ";
        for(int k = 0; k < n; k++){
            cout << a[k] << " ";
        }
        cout << endl;
    }
    
    return 0;
}