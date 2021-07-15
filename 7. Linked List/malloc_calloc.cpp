//
// Created by Rakib on 4/22/2021.
//

#include <iostream>
using namespace std;

int main(){
    int i, n;
    cin >> n;

    int *ptr = (int*) malloc(n*sizeof(int));

    if(ptr == NULL){
        cout << "Memory not available" << endl;
        exit(1);
    }
    for (int j = 0; j < n ; ++j) {
        cin >> *(ptr+j);
    }
    for (int j = 0; j < n ; ++j) {
        cout << *(ptr+j) << "\t";
    }
    return 0;
}