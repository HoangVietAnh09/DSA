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

void insert(Node *root, int u, int v, char x){
    if(root == NULL) return;
    if(root->data == u){
        if(x == 'L') root->left = new Node(v);
        else root->right = new Node(v);
    }
    else{
        insert(root->left, u, v, x);
        insert(root->right, u, v, x);
    }
}
void search(Node *root){
    if(root == NULL) return;
    stack<Node *> s1, s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            Node *nd = s1.top();
            s1.pop();
            cout << nd->data << " ";
            if(nd->right != NULL) s2.push(nd->right);
            if(nd->left != NULL) s2.push(nd->left);
        }
        while(!s2.empty()){
            Node *nd = s2.top();
            s2.pop();
            cout << nd->data << " ";
            if(nd->left != NULL) s1.push(nd->left);
            if(nd->right != NULL) s1.push(nd->right);
        }
        
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Node *root = NULL;
        while(n--){
            int u, v;
            char x;
            cin >> u >> v >> x;
            if(root == NULL){
                root = new Node(u);
                if(x == 'L') root->left = new Node(v);
                else root->right = new Node(v);
            }else{
                insert(root, u, v, x);
            }
        }
        search(root);
    }
    return 0;
}