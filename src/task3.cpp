#define _CRT_SECURE_NO_WARNINGS
#include "string.h"
#include "task3.h"
#define BUF 64

int getMaxWord(char buf[], char word[])
{
	int maxWord = 0;
	int lenght, lengh[BUF] = { 0 };

	char * temp = strtok(buf, " ");
	int i = 0;
	while (temp != '\0')
	{
		lenght = strlen(temp);
		lengh[i] = lenght;

		if (lengh[i] > maxWord)
		{
			strcpy(word, temp);
			maxWord = lengh[i];
		}
		temp = strtok(0, " ");
		i++;
	}


	return maxWord;
}