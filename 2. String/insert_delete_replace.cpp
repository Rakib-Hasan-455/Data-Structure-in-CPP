#include<iostream>
#include <string.h>

using namespace std;

void insert (char*, char*, int);
void Delete (char*, int, int);
//void replace(char*, char*);


int main(int argc, char const *argv[])
{
	insert("Rakib", "Sakib", 3);
	Delete("IamGoodBoy", 5, 2);
	return 0;
}


void insert (char* strA, char* strB, int pos){
	char strC[50];
    strncpy(strC, strA, pos);
	strC[pos] = '\0';
	strcat(strC, strB);
	strcat(strC, strA + pos);
	cout << "After Inserted = "<< strC << endl;
}

void Delete (char* strX, int pos, int len){
	char strB[50];
	strncpy(strB, strX, pos);
	strB[pos] = '\0';
	int move = pos + len;
	strcat(strB, strX + move); //Joint strC with strA(after 4th position/index 3)
	cout << "Deleted = " << strB; //print the string
}