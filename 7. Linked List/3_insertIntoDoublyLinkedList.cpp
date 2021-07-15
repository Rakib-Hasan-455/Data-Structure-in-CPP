// Md. Rakibul Hasan
// 2020000000144

#include <iostream>
#include <algorithm>
#include <stdlib.h>


using namespace std;

struct node *createNode(int x);
void insertAtHead(int x);
void insertAtTail(int x);
void printforward();
void printbackward();

struct node *head;

int main(){
    head = NULL;
    insertAtHead(2);
    insertAtHead(4);
    insertAtTail(7);

    printforward();
    printbackward();
}



struct node{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *createNode(int x) {
    struct node *newnode = (struct node *) malloc(sizeof(struct node));

    newnode->data = x;
    newnode->prev = NULL;
    newnode->next = NULL;
    return newnode;
}

void insertAtHead(int x){
    struct node *newnode = createNode(x);
    if(head == NULL){
        head = newnode;
        return;
    } else {
        head -> prev = newnode;
        newnode -> next = head;
        head = newnode;
    }

}

void insertAtTail(int x) {
    struct node *temp = head;
    struct node *newnode = createNode(x);
    if(head == NULL) {
        head = newnode;
        return;
    }
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}

void printforward(){
    struct node *temp = head;
    cout << "Forward: " ;
    while(temp!= NULL){
        cout << temp -> data << "  ";
        temp = temp -> next;
    }
    cout << endl;
}

void printbackward(){
    struct node *temp = head;
    if(temp == NULL){
        return;
    } else {
        while (temp -> next != NULL) {
            temp = temp->next;
        }
        cout << "Backward: ";
        while (temp != NULL) {
            cout << temp-> data << "  ";
            temp = temp->prev;
        }
        cout << endl;
    }
}