#include "task3.h"
#include <stdio.h>
#include <string.h>


int getMaxWord(char buf[], char word[])
{
	char arr[SIZE][SIZE] = { 0 };
	int start = 0, count =0, j =0, k = 0;
	int length = strlen(buf);
	for (int i = 0; buf[i] == ' '; i++)
		start++;
	if (buf[start] != '\n')
	{
		for (int i = start; i < length; i++)
		{
			if (buf[i] == ' ' && buf[i + 1] != ' ' && buf[i + 1] != '\n' || buf[i] == '\n' || buf[i + 1] == '\0')
				count++;
		}
	}
	for (int i = start; i < length; i++)
	{
		if (buf[i] != ' ' && buf[i] != '\n')
		{
			arr[j][k] = buf[i];
			k++;
		}
		else
			if (buf[i] == ' ' && buf[i + 1] != ' ')
			{
				j++;
				k = 0;
			}
	}
	int quantity = strlen(arr[0]), longWord = 0;
	for (int i = 1; i < count; i++)
	{
		if (strlen(arr[i]) > quantity)
		{
			quantity = strlen(arr[i]);
			longWord = i;
		}
	}
	for (int i = 0; i < quantity; i++)			
		word[i] = arr[longWord][i];
	return quantity;
}