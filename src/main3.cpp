#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task3.h"
#define BUF 64

int main()
{
	srand(time(NULL));

	char  buf[BUF] = { 0 };
	char  word[BUF] = { 0 };
	for (int i = 0; i < BUF; i++)
	{
		int a = rand() % 3;
		if (a == 0)
			buf[i] = (char)(32);              
		if (a == 1)
			buf[i] = (char)(rand() % 26 + 65); 
		if (a == 2)
			buf[i] = (char)(rand() % 26 + 97); 
											   
		if (i == BUF - 1)
			buf[i] = '\0';					 
	}


	printf("The string is: \n%s\n", buf);

	printf("\nWord length %d letters\n", getMaxWord(buf, word));

	printf("The longer word is: %s\n", word);

	return 0;
}