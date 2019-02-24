#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	puts("Enter string: ");
	char buf[SIZE] = { 0 };
	fgets(buf, SIZE, stdin);
	printf("Summa chisel: %d", getSum(buf)); 
	return 0;
}