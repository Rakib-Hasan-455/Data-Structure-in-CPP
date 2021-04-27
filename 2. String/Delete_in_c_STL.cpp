#include<stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char strA[20] = "Blahblahblah", strB[50];
	int pos = 3, len = 5; //You declare an integer for how many characters you wish to insert the second string into the first
	strncpy(strB, strA, pos);
	strB[pos] = '\0';
	strcat(strB, strA + (pos+len)); //Joint strC with strA(after 4th position/index 3)
	printf("%s\n", strB); //print the string
	return 0;
}