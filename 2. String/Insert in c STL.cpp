#include<stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char *strA = "Blahblahblah", *strB = "123", strC[50];
	int x = 4;
	strncpy(strC, strA, x);
	strC[x] = '\0';
	strcat(strC, strB);
	strcat(strC, strA + x);
	printf("%s\n", strC);
	return 0;
}