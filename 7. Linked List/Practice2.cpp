#include<iostream>
#include <algorithm>

#define capacity 100
int top1 = -1;
int Stack1[capacity];
int top2 = -1;
int Stack2[capacity];

using namespace std;

//push1 function for stack 1
void Push1(int x){
    if(top1 == capacity - 1){
        cout << "Stack Overflow on stack 1!" << endl;
        return;
    }
    Stack1[++top1] = x;
}
//pop1 function for stack 1
int Pop1(){
    if(top1 == -1){
        cout << "Empty Stack 1!" << endl;
        return 0;
    }
    return Stack1[top1--];
}
//push2 function for stack 2
void Push2(int x){
    if(top2 == capacity - 1){
        cout << "Stack Overflow on Stack 2!" << endl;
        return;
    }
    Stack2[++top2] = x;
}
//pop1 function for stack 2
int Pop2(){
    if(top2 == -1){
        cout << "Empty Stack 2!" << endl;
        return 0;
    }
    return Stack2[top2--];
}
//Function for enQueue using two stacks
void enQueue(int x){
    //Moving Stack1 into Stack2
    while(top1 != -1){
        Push2(Stack1[top1]);
        Pop1();
    }
    //Pushing elements into stack1
    Push1(x);
    //moving Stack2 elements into Stack1
    while(top2 != -1){
        Push1(Stack2[top2]);
        Pop2();
    }
}
//Function for deQueue from stack 1
int deQueue(){
    if(top1 == -1){
        cout << "Can't deQueue! Stack1 is Empty." << endl;
    return 0;
    } else {
        int poppedValue = Stack1[top1];
        Pop1();
        return poppedValue;
    }
}
//Printing the final value of Stack 1 or Queue
void print(){
    int tempTop1 = top1;
    while(tempTop1 != -1){
        cout << Stack1[tempTop1] << endl;
        tempTop1--;
    }
}
//Main function drive code or to call user defined function
int main()
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    deQueue(); //It will dequeue 1
    enQueue(4);
    cout << "Latest Queue elements are:" << endl;
    print();
    return 0;
}