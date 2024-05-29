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
void makeNode(Node *root, int u, int v, char c){
	if(c == 'L') root->left = new Node(v);
	else root->right = new Node(v);
}
void insert(Node *root, int u, int v, char c){
	if(root == NULL) return;
	if(root->data == u){
		makeNode(root, u, v, c);
	}else{
		insert(root->left, u, v, c);
		insert(root->right, u, v, c);		
	}
}
bool check(Node *a, Node *b){
	if(a == NULL && b == NULL) return true;
	if(a != NULL && b != NULL && a->data == b->data)
		return check(a->left, b->left) && check(a->right, b->right);
	return false;
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		Node *a = NULL;
		Node *b = NULL;
		while(n--){
			int u, v;
			char c;
			cin >> u >> v >> c;
			if(a == NULL){
				a = new Node(u);
				makeNode(a, u, v, c);
			}else{
				insert(a, u, v, c);
			}
		}
		cin >> n;
		while(n--){
			int u, v;
			char c;
			cin >> u >> v >> c;
			if(b == NULL){
				b = new Node(u);
				makeNode(b, u, v, c);
			}else{
				insert(b, u, v, c);
			}
		}
		cout << check(a, b) << endl;
	}
	return 0;
}
