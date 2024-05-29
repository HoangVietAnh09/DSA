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
void add(Node *&root, int x){
	if(root == NULL) root = new Node(x);
	else{
		if(x < root->data) add(root->left, x);
		else add(root->right, x);
	}
}
void postOrder(Node *root){
	if(root == NULL) return;
	postOrder(root->left);
	postOrder(root->right);
	cout << root->data << " ";
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		Node *root = NULL;
		while(n--){
			int x;
			cin >> x;
			add(root, x);
		}
		postOrder(root);
		cout << endl;
	}
	return 0;
}

