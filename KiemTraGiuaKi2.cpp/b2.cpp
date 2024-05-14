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

void insertRight(Node* root, int n1, int n2){
    if(root == NULL) return;
    if(root->data == n1){
        root->right = new Node(n2);
    }else{
        insertRight(root->right, n1, n2);
    }
}
void insertLeft(Node* root, int n1, int n2){
    if(root == NULL) return;
    if(root->data == n1){
        root->left = new Node(n2);
    }else{
        insertLeft(root->left, n1, n2);
    }
}
void preOrder(Node *root){
    if(root == NULL) return;
    cout << root->data;
    preOrder(root->left);
    preOrder(root->right);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Node *root = NULL;
        int tmp;
        int l = 1, r = 1;
        while(n--){
            int x;
            cin >> x;
            if(root == NULL){
                Node *dt = new Node(x);
            }else{
                if(l == 1){
                    insertLeft(root, tmp, x);
                    l = 0;
                    r = 1;
                }else if(r == 1){
                    insertRight(root, tmp, x);
                    r = 0;
                    l = 1;
                }
            }
            tmp = x;
        }
        preOrder(root);
        cout << endl;

    }
    return 0;
}