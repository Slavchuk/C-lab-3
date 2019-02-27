#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task4.h"
#define SIZE 100

int main()
{
	char buf[SIZE] = { 0 };
	printf("Enter a string:\n");
	fgets(buf, SIZE, stdin);
	printf("\nThe sum is %d\n", getSum(buf));
	return 0;
}