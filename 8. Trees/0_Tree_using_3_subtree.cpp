#include <iostream>
#include <queue>

using namespace std;

struct node {
    int data;
    struct node* first;
    struct node* middle;
    struct node* last;
};

// Create a new Node
struct node* createNode(int Data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = Data;
    newNode->first = NULL;
    newNode->middle = NULL;
    newNode->last = NULL;
    return newNode;
}


struct node* insertFirst(struct node* root, int Data) {
    root->first = createNode(Data);
    return root->first;
}

struct node* insertMiddle(struct node* root, int Data) {
    root->middle = createNode(Data);
    return root->middle;
}

struct node* insertLast(struct node* root, int Data) {
    root->last = createNode(Data);
    return root->last;
}


// Preorder traversal
void levelOrderPrint(node *root){
    if(root == NULL){
        return;
    }
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* current = q.front();
        cout << current -> data << " ";
        if(current -> first != NULL){
            q.push(current -> first);
        }
        if(current -> middle != NULL){
            q.push(current -> middle);
        }
        if(current -> last != NULL){
            q.push(current -> last);
        }
    q.pop();
    }
}

int main() {

    struct node* root = createNode(1);

    insertFirst(root, 2);
    insertMiddle(root, 3);
    insertLast(root, 5);

    insertFirst(root->first,7);
    insertMiddle(root-> first,1);
    insertLast(root-> first,8);

    insertFirst(root->middle,6);
    insertMiddle(root-> middle,1);
    insertLast(root-> middle,7);

    insertFirst(root->last,8);
    insertMiddle(root-> last,9);
    insertLast(root-> last,5);

    cout << "Output:" << endl;
    levelOrderPrint(root);

    return 0;
}