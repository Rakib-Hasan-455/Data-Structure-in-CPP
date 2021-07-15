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

int findMin(node* root){
	if(root == NULL){
		cout << "Error: Tree is empty!" << endl;
		return -1;
	} else {
		struct node* current = root;
		while(current -> left != NULL){
			current = current -> left;
		}
		return current -> data;
	}
}


int findMax(node* root){
	if(root == NULL){
		cout << "Error: Tree is empty!" << endl;
		return -1;
	} else {
		struct node* current = root;
		while(current -> right != NULL){
			current = current -> right;
		}
		return current -> data;
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

cout << "Minimum : " << findMin(root) << endl;
cout << "Maximum : " << findMax(root) << endl;

return 0;
}