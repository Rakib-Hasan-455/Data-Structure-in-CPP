#include <stdio.h>

void find(int [], int, int, int);

int data[10] = {22, 65, 1, 99, 32, 17, 74, 49, 33, 2};
int n, loc1, loc2, first, second;

int main(int argc, char const *argv[])
{
	n = 10;
	loc1 = -1;
	loc2 = -1;

	find(data, n, loc1, loc2);
	printf("first = %d, loc1 = %d, second = %d, loc2 = %d\n", first, loc1, second, loc2);
	return 0;
}

void find(int data[], int len, int l1, int l2){
	int temp, k;
	first = data[0];
	second = data[1];
	l1 = 0;
	l2 = 1;
	for(k = 2; k < len; k++)
	{
		if(first < data[k]){ 		//22, 65, 1, 99, 32, 17, 74, 49, 33, 2
			second = first;
			first = data[k];
			l2 = l1;
			l1 = k;
		}
		else if(second < data[k]){  //22, 65, 1, 99, 32, 17, 74, 49, 33, 2
			second = data[k];
			l2 = k;
		}
	}
	loc1 = l1;
	loc2 = l2;
}