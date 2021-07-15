//
// Created by Rakib on 5/9/2021.
//

#include <iostream>
#include <algorithm>
#include <malloc.h>

using namespace std;

struct node{
    int data;
    struct node *next;
};



struct node *head, *point;

void insert(int x){
    node *temp = (node*) malloc(sizeof(struct node));
    temp -> data = x;
    temp -> next = NULL;
    if(head == NULL){
        head = temp;
    } else{
        point = head;
        while(point -> next != NULL){
            point = point -> next;
        }
        point -> next = temp;
    }
}

void print(){
    struct node *temp = head;
    while(temp != NULL){
        cout << temp-> data << endl;
        temp = temp -> next;
    }
}

int main(){

    insert(2);
    insert(1);
    insert(3);

    print();
}