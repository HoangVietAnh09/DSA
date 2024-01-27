#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 1; i < n; i++){
        int key = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        cout << "Buoc " << i-1 << ": ";
        for(int j = 0; j <= i; j++) cout << a[j] << " ";
        cout << endl;
    }
    return 0;
}