#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    int a[1004];
    for(int i = 0; i < n; i++) cin >> a[i];
<<<<<<< HEAD
    for(int i = 0; i < n; i++)

=======
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] > a[j]) swap(a[i], a[j]);
        }
        cout << "Buoc " << i+1 << ": ";
        for(int i = 0; i < n; i++) cout << a[i] << " ";
        cout << endl;
    }
>>>>>>> 590bf36d269ab37c6884aca4b46a510cf4a03304
    return 0;
}