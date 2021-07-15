// Created by Rakib on 4/25/2021.
//

#include <iostream>
#include<stdlib.h>

using namespace std;

struct node{
    int data;
    struct node *link;
};



void print(struct node *next){
    while(next  != NULL){
        cout << next -> data << endl;
        cout << next -> link << endl;
        next = next -> link;
    }

}

int main(){
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;
    // Allocate memory
    one = (struct node*)malloc(sizeof (struct node));
    two = (struct node*)malloc(sizeof (struct node));
    three = (struct node*)malloc(sizeof (struct node));

    // Assign value values
    one -> data = 2;
    two -> data = 5;
    three -> data = 8;

    // Connect nodes
    one->link = two;
    two->link = three;
    three->link = NULL;

    //printing node values
    head = one;
    print(head);

}