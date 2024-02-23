#include <bits/stdc++.h>
using namespace std;
int main(){
<<<<<<< HEAD
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        bool check = false;
        for(int j = 0; j < n-i-1; j++){
            if(a[j] > a[j+1]){
                check = true;
                swap(a[j], a[j+1]);
            }
        }
        if(check){
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
=======
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
    
>>>>>>> 590bf36d269ab37c6884aca4b46a510cf4a03304
    return 0;
}