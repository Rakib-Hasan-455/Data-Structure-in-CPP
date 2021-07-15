//Md. Rakibul Hasan
//2020000000144


#include<iostream>
#include <algorithm>

#define capacity 100
int top1 = -1;
int Stack1[capacity];

using namespace std;

//push1 function for stack 1
void Push1(int x){
    if(top1 == capacity - 1){
        cout << "Stack Overflow on stack 1!" << endl;
    }
    Stack1[++top1] = x;
}

//pop1 function for stack 1
int Pop1(){
    if(top1 == -1) {
        cout << "Empty Stack 1!" << endl;
        return 0;
    }
    return Stack1[top1--];
}

//Function for enQueue using two stacks
void enQueue(int x){
    Push1(x);
}

//Function for deQueue from stack 1
int deQueue(){
    if(top1 == -1){
        cout << "Can't deQueue! Stack1 is already Empty." << endl;
        return 0;
    } else {
        return Pop1();
    }
}
//Printing the final value of Stack 1 or Queue
void print(){
    int tempTop1 = 0;
    while(tempTop1 <= top1){
        cout << Stack1[tempTop1] << endl;
        tempTop1++;
    }
}

//Main function drive code or to call user defined function
int main()
{
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    deQueue();
    cout << "Reversed Queue elements are:" << endl;
    print();
    return 0;
}