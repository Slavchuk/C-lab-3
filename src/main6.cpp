#include "task6.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 7

int main()
{
	int arr[SIZE];
	srand(time(0));
	printf("\n");
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 - 4;
		printf("%d\t", arr[i]);
	}
	printf("\nSum of elements between first min and first max element: %d\n", getSumMaxMin(arr, SIZE));
	return 0;
}