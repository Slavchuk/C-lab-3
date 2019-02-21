#include "task3.h"
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	puts("Enter string: ");
	char buf[SIZE] = { 0 };
	char word[SIZE] = { 0 };
	fgets(buf, SIZE, stdin);
	printf("%s length: %d", word, getMaxWord(buf, word));
	return 0;
}