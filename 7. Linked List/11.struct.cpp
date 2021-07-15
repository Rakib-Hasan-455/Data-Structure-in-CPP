//
// Created by Rakib on 4/21/2021.
//

#include <iostream>
using namespace std;

struct person{
    string name;
    int age;
    int salary;
};

void display(struct person personX){
        cout << "name:";
        cout << personX.name << endl;
        cout << "Age:";
        cout << personX.age << endl;
        cout << "Salary:";
        cout << personX.salary << endl;
}

int main(){ /*
    //input way into struct
    struct person person1, person2;
    person1.age = 10;
    person1.salary = 20000;
    cout << "Person1" << endl;
    cout << person1.age << endl;
    cout << person1.salary << endl;
    cout << "Person2" << endl;
    cin >> person2.age >> person2.salary;
    cout << person2.age << endl << person2.salary << endl;
    cout << "Person3" << endl;
    struct person person3 = {100, 30};
    cout << person3.age << endl << person3.salary << endl;
    cout << "Person4" << endl;
    struct person person4 = person3;
    cout << person4.age << endl << person4.salary << endl;
    */
    //Input into struct using array
    /*struct person person[4];
    for (int i = 0; i < 4; i++) {
        cout << "Give info for Person " << i+1 << ":" << endl;
        cout << "Age:";
        cin >> person[i].age;
        cout << "Salary:";
        cin >> person[i].salary;
    }
    for (int i = 0; i < 4; i++) {
        cout << "Info for Person " << i+1 << ":" << endl;
        cout << "Age:";
        cout << person[i].age << endl;
        cout << "Salary:";
        cout << person[i].salary << endl;
    }
     */
    //Displaying struct in another Display functon
    struct person person[4];
    for (int i = 0; i < 4; i++) {
        cout << "Give info for Person " << i+1 << ":" << endl;
        cout << "Name:";
        cin >> person[i].name;
        cout << "Age:";
        cin >> person[i].age;
        cout << "Salary:";
        cin >> person[i].salary;
        }
    for (int i = 0; i < 4; i++) {
        cout << "Info for Person " << i+1 << ":" << endl;
        display(person[i]);
    }
    return 0;
}