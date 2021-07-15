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

void Insert(node* &root,int Data) {
	if(root == NULL){
		root = createNode(Data);
		return;
	} else if(root -> data >= Data) {
		Insert(root -> left, Data);
	} else if(root -> data <  Data) {
		Insert(root -> right, Data);
	}
}

bool Search(node* root,int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left,data);
	}
	else {
		return Search(root->right,data);
	}
}


// levelwise traversal
void levelOrderPrint(node* root){
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
    cout << endl;
}

int main() {
struct node* root = NULL;
Insert(root, 15);
Insert(root, 9);
Insert(root, 16);
Insert(root, 5);
Insert(root, 25);
Insert(root, 21);
Insert(root, 27);
Insert(root, 3);
levelOrderPrint(root);

cout << "Search Data: ";
int data;
cin >> data;

if(Search(root, data)) { 
	cout << "Found!" << endl; 
} else { 
	cout << "Not Found!" << endl; 
}

return 0;
}