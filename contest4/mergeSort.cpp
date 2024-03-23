#include <bits/stdc++.h>
using namespace std;
#define ll long long
void merge(ll a[], int l, int m, int r){
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(int i = 0; i < n1; i++) L[i] = a[i+1];
    for(int i = 0; i < n2; i++) R[i] = a[m+i+1];
    int i = 0, j = 0, k = l;
    ll dem = 0;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            a[k++] = L[i++];
        }else{
            a[k++] = R[j++];
            dem = dem + n1 - i;
        }
    }
    while(i < n1){
        a[k++] = L[i++];
    }
    while(j < n2){
        a[k++] = R[j++];
    }
}
void mergeSort(int a[], int l, int r){
    if(l >= r) return;
    int m = l + (r-l)/2;
    mergeSort(a, l, m);
    mergeSort(a, m+1, r);

}
int main(){
    return 0;
}