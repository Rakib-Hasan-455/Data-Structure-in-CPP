#include<iostream>
#include <algorithm>
#include<string.h>
#include<vector>
#include <math.h>

#define capacity 10
int top = -1;
int Stack[capacity];

using namespace std;


void Push(int x){
    if(top == capacity - 1){
        cout << "Stack Overflow" << endl;
        return;
    }
    Stack[++top] = x;
}

void Pop(){
    if(top == -1){
        cout << "No element to the pop" << endl;
        return;
    }
    top--;
}

int Top(){
    return Stack[top];
}

void print(){
    for(int i = 0; i <= top; i++){
        cout << Stack[i] << endl;
    }
}

int main()
{
    int x;
    int len = capacity;
    for (int i = 0; i < (len); i++) {
        cin >> x;
        Push(x);
    }
    Pop();
    print();
    return 0;
}
