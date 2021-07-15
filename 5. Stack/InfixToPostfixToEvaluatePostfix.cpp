//Md. Rakibul Hasan
//2020000000144

#include<iostream>
#include <algorithm>
#include<math.h>

using namespace std;

#define capacity 100
int top1 = -1;
char Stack1[capacity];
int top2 = -1;
int Stack2[capacity];

string infix, postfix;
int point1 = 0, point2 = 0;

//push1 function for stack 1
void Push1(char x){
    if(top1 == capacity - 1){
        cout << "Stack Overflow on stack 1!" << endl;
        return;
    }
    Stack1[++top1] = x;
}
//pop1 function for stack 1
char Pop1(){
    if(top1 == -1){
        return -1;
    } else {
        return Stack1[top1--];
    }
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
    if(top1 == -1){
        return -1;
    } else {
    return Stack2[top2--];
}
}

int precedence(char a)
{
    if(a == '(') {
        return 0;
    } else if(a == '+' || a == '-') {
        return 1;
    } else if(a == '*' || a == '/') {
        return 2;
    } else if(a == '^'){
        return 3;
    }
    return 0;
}

string infixToPostfix()
{
    while((point1 < infix.length())){
        if(isalnum(infix[point1])) {
            postfix.push_back(infix[point1]);
        } else if(infix[point1] == '(') {
            Push1(infix[point1]);
        } else if(infix[point1] == ')') {
            char b;
            while((b = Pop1()) != '(') {
                postfix.push_back(b);
            }
        } else {
                    while (precedence(Stack1[top1]) >= precedence(infix[point1])) {
                        postfix.push_back(Pop1());
                    }
            Push1(infix[point1]);
        }
        point1++;
    }

    while(top1 > -1)
    {
        postfix.push_back(Pop1());
    }
    return postfix;
}

int PostfixEvaluation() {
    while (point2 < postfix.length()) {
        if ((postfix[point2] >= '0' && postfix[point2] <= '9')) {
            int z = (int) (postfix[point2]) - 48;
            Push2(z);
        } else if ((postfix[point2] >= 'A' && postfix[point2] <= 'z') && (postfix[point2] != '^')) {
            cout << "Enter the value of " << postfix[point2] << "=";
            int z;
            cin >> z;
            Push2(z);
        } else if (postfix[point2] == '+') {
                int x = Pop2();
                int y = Pop2();
                int z = y + x;
                Push2(z);
        } else if (postfix[point2] == '-') {
                int x = Pop2();
                int y = Pop2();
                int z = y - x;
                Push2(z);
        } else if (postfix[point2] == '*') {
                int x = Pop2();
                int y = Pop2();
                int z = y * x;
                Push2(z);
        } else if (postfix[point2] == '/') {
                int x = Pop2();
                int y = Pop2();
                int z = y / x;
                Push2(z);
        } else if (postfix[point2] == '^') {
                int x = Pop2();
                int y = Pop2();
                int z = pow(y,x);
                Push2(z);
        } else {
                cout << "Invalid Expression! Please fix infix expression and try again." << endl;
                break;
        }
        point2++;
        }

    return Pop2();
}


int main() {
    cout << "Infix expression = ";
    cin >> infix;
        postfix = infixToPostfix();
        cout << "Postfix expression = " << postfix << endl;
        int result = PostfixEvaluation();
        cout << "Postfix Evaluation Result = " << result << endl;
    
    return 0;
}
