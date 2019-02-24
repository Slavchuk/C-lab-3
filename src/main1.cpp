#include "task1.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	puts("Enter string: ");
		char buf[SIZE] = { 0 };
		fgets(buf, SIZE, stdin);
		printf("number of words: %d", wordCount(buf));
	return 0;
}