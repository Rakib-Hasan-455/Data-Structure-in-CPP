#include<stdio.h>
#include <string.h>

void insert (char *strA, char *strB);
void Delete (char *strA, char *strB);
void replace(char *strA, char *strB);


int main()
{
	char *strA = "Rakib", char *strB = "Sakib";
	insert(*strA, *strB);	
	return 0;
}


void insert (char *strA, char *strB){
	int pos = 4;
	int strC[50];
	strncpy(strC, strA, pos);
	strC[pos] = '\0';
	strcat(strC, strB);
	strcat(strC, strA + pos);
	printf("After Inserted = %s\n", strC);
}