#include<stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char strA[20] = "Blahblahblah", strB[5] = "123", strC[50];
	int x = 4; //You declare an integer for how many characters you wish to insert the second string into the first
	strncpy(strC, strA, x);
	strC[x] = '\0';
	strcat(strC, strB);
	strcat(strC, strA + x); //Joint strC with strA(after 4th position/index 3)
	printf("%s\n", strC); //print the string
	return 0;
}