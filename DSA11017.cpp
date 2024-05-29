#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left, *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
Node* built(int pre[], int *idx, int left, int right, int n){
    if(*idx >= n || left > right) return;
    Node *root = new Node(pre[*idx]);
    (*idx)++;
    if(left == right) return root;
    int ans;
    for(int i = left; i <= right; i++){
        if(pre[i] > root->data){
            ans = i;
            break;
        }
    }
    root->left = built()
}
int main(){
    return 0;
}