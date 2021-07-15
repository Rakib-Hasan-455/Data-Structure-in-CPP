#include<iostream>
using namespace std;
#define size 100
int queue[size];
int front = -1;
int rear  = -1;

int top1 = -1;
int Stack1[size];


// //push1 function for stack 1
// void Push1(int x){
//     if(top1 == capacity - 1){
//         cout << "Stack Overflow on stack 1!" << endl;
//     }
//     Stack1[++top1] = x;
// }

// //pop1 function for stack 1
// int Pop1(){
//     if(top1 == -1) {
//         cout << "Empty Stack 1!" << endl;
//         return 0;
//     }
//     return Stack1[top1--];
// }


void Enqueue(int x){
    if(rear == size - 1){
        cout << "Overflow was controlled" << endl;
    } else if(front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    } else {
        rear++;
        queue[rear] = x;
    }
    cout << (rear) << endl;
    cout << (front) << endl;
}
void Dequeue(){
    if(front == -1 && rear == -1){
        cout << "Empty. Cant delete" << endl;
    } else if(front == rear){
        front = rear = -1;
    } else {
        front++;
    }
    
    cout << (rear) << endl;
    cout <<  front << endl;
}


void Display(){
    if(front == -1 && rear == -1){
        cout << "Queue is Empty" << endl;
    } else {
        for(int i = front; i < rear+1; i++){
            cout << queue[i] << endl;
        }
    }
}
int main()
{
    Enqueue(5);
     cout << endl << endl;
    Enqueue(6);
 cout << endl << endl;
         Enqueue(9);
  cout << endl << endl;
         Enqueue(5);
  cout << endl << endl;
           Enqueue(6);
  cout << endl << endl;
           Enqueue(9);
          cout << endl << endl;
    Dequeue();  
  cout << endl << endl;
           Enqueue(3);
   
     cout << endl << endl;
    Dequeue();
      cout << endl << endl;
   
}