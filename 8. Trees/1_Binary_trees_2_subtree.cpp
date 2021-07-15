#include<iostream>
#include<queue>

using namespace std;

struct node {
	int data;
	node* left;
	node* right;
};

struct node* createNode(int data){
	struct node* newNode = (struct node*)malloc(sizeof(struct node));
	newNode -> data = data;
	newNode -> left = newNode -> right = NULL;
	return newNode;
}


struct node* insertLeft(struct node* root, int data) {
    root->left = createNode(data);
    return root->left;
}

struct node* insertRight(struct node* root, int data) {
    root->right = createNode(data);
    return root->right;
}

// levelwise traversal
void levelOrderPrint(node *root){
    if(root == NULL){
        return;
    }
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* current = q.front();
        cout << current -> data << " ";
        if(current -> left != NULL){
            q.push(current -> left);
        }
        if(current -> right != NULL){
            q.push(current -> right);
        }
    q.pop();
    }
}

int main() {
	struct node* root = createNode(15);

	insertLeft(root, 10);
	insertRight(root, 20);

	insertLeft(root->left, 9);
	insertRight(root->left, 11);
	
	insertLeft(root->right, 19);
	insertRight(root->right, 21);

	levelOrderPrint(root);
}

