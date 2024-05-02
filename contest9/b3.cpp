#include <bits/stdc++.h>
using namespace std;
bool check;
struct Node{
    int data;
    Node *left, *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
bool isEqual(Node *A, Node *B){
    if(A == NULL && B == NULL) return true;
    if(A != NULL && B != NULL && A->data == B->data)
        return isEqual(A->left, B->left) && isEqual(A->right, B->right);
    return false;
}
void levelOrder(Node* root){
    queue<Node* > Q;
    Q.push(root);
    while(!Q.empty()){
        Node *nd = Q.front();
        Q.pop();
        cout << nd->data << " ";
        if(nd->left != NULL) Q.push(nd->left);
        if(nd->right != NULL) Q.push(nd->right);
    }
    cout << endl;
}
int isPerfect(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    if(!(root->left != NULL && root->right != NULL)){
        check = false;
        return 0;
    }
    return isPerfect(root->left) + isPerfect(root->right);
}
void insert(Node *root, int n1, int n2, char c){
    if(root == NULL) return;
    if(root->data == n1){
        if(c == 'L') root->left = new Node(n2);
        else root->right = new Node(n2);
    }else{
        insert(root->left, n1, n2, c);
        insert(root->right, n1, n2, c);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Node *a = NULL;
        while(n--){
            int u, v;
            char x;
            cin >> u >> v >> x;
            if(a == NULL){
                a = new Node(u);
                if(x == 'L') a->left = new Node(v);
                else a->right = new Node(v);
            }else{
                insert(a, u, v, x);
            }
        }
        int m;
        cin >> m;
        Node *b = NULL;
        while(m--){
            int u, v;
            char x;
            cin >> u >> v >> x;
            if(b == NULL){
                b = new Node(u);
                if(x == 'L') b->left = new Node(v);
                else b->right = new Node(v);
            }else{
                insert(b, u, v, x);
            }
        }
        cout << isEqual(a, b) << endl;
    }
    return 0;
}