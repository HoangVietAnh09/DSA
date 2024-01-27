#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
<<<<<<< HEAD
    for(int i = 1; i < n; i++){
=======
    for(int i = 0; i < n; i++){
>>>>>>> 590bf36d269ab37c6884aca4b46a510cf4a03304
        int key = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
<<<<<<< HEAD
        cout << "Buoc " << i-1 << ": ";
        for(int j = 0; j <= i; j++) cout << a[j] << " ";
=======
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i; j++){
            cout << a[j] << " ";
        }
>>>>>>> 590bf36d269ab37c6884aca4b46a510cf4a03304
        cout << endl;
    }
    return 0;
}