//
// Created by Rakib on 4/21/2021.
//

#include <iostream>
#include<stdlib.h>

using namespace std;

struct node{
    int data;
    struct node *link;
};



void print(){
    struct node *temp;
    temp = head;
    int x = 0;
    while(temp  != NULL){
        cout << temp -> data << endl;
        cout << temp -> link << endl;
        temp = temp -> link;
    }

}

int main(){
    struct node *head;
    head = NULL;
    head = (struct node*)malloc(sizeof (struct node));
    head -> data = 2;
    head -> link = (struct node*)malloc(sizeof (struct node));

    head -> link -> data = 5;
    head -> link -> link = NULL;

    print();

}