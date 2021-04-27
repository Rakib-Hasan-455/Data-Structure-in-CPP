#include<iostream>
using namespace std;
#define size 7
int queue[size];
int front = -1;
int rear  = -1;

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
}
void Dequeue(){
    if(front == -1 && rear == -1){
        cout << "Empty. Cant delete" << endl;
    } else if(front == rear){
        front = rear = -1;
    } else {
        front++;
    }
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
    Enqueue(6);
    Enqueue(9);
    Enqueue(5);
    Enqueue(6);
    Enqueue(9);
    Enqueue(3);
    Dequeue();
    Display();
}